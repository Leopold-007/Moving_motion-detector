const R0 = 10000.0;
const T0 = 25.0;
const B = 3380.0;

const V = 5.0;
const R1 = 10000.0;

function temp(v) {
    var r = v * (R1 / (5.0 - v));
    var t = 1.0 / (1.0/B * Math.log(r/R0) + 1.0/(T0 + 273.0)) - 273.0
    return t;
}

for (var t=-30; t <=60; t++) {
    var r = R0 * Math.exp(B*(1.0/(t+273.0) - 1.0/(T0+273.0)));
    console.log('t: ' + t + ' r: ' + r);
}

for (var v= 10; v <=40; v++) {
    console.log('v: ' + v/10.0 + ' t: ' + temp(v/10.0));
}

