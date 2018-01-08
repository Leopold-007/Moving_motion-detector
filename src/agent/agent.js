const SerialPort = require('serialport');
const mqtt = require('mqtt');

const TX = 'display-tx';
const RX = 'display-rx';

const PORT_GPS = '/dev/serial/by-id/usb-FTDI_FT230X_Basic_UART_DJ00LUHR-if00-port0';
const PORT_DOPPLER = '/dev/serial/by-id/usb-FTDI_FT230X_Basic_UART_DJ00M1CZ-if00-port0';

const Readline = SerialPort.parsers.Readline;

const port_gps = new SerialPort(PORT_GPS, err => {
    if (err) {
        return console.log('Error:', err.message);
    }
});
const parser_gps = new Readline();
port_gps.pipe(parser_gps);
port_gps.on('open', () => {
    // TODO
});

const port_doppler = new SerialPort(PORT_DOPPLER, {
    baudrate: 9600,
    dataBits: 8,
    parity: 'odd',
    stopBits: 1,
    flowControl: false},
    err => {
    if (err) {
        return console.log('Error:', err.message);
    }
});
const parser_doppler = new Readline('\r\n');
port_doppler.pipe(parser_doppler);
port_doppler.on('open', () => {
    // TODO
});

function timestamp() {
    return Math.floor(new Date().getTime() / 1000);
}

const client = mqtt.connect('mqtt://localhost:1883');
client.on('connect', () => {
    parser_gps.on('data', data => {
        if (/\$GPRMC/.test(data)) {
            console.log(data);
            var payload = {
                device: 'gps',
                timestamp: timestamp(),
                status: data
            };
            client.publish(RX, JSON.stringify(payload)); 
        }
    });
    parser_doppler.on('data', data => {
        console.log(data);
        var payload = {
            device: 'doppler',
            timestamp: timestamp(),
            status: data
        };
        client.publish(RX, JSON.stringify(payload)); 
    });
});

