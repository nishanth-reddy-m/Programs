let stn = String(123456);
let nts = Number("123456");
let stb = Boolean("true");
let bts = String(true);
let ntb = Boolean(0);
let btn = Number(true);
let chain = "1234";

console.log(stn,typeof(stn));
console.log(nts,typeof(nts));
console.log(stb,typeof(stb));
console.log(bts,typeof(bts));
console.log(ntb,typeof(ntb));
console.log(btn,typeof(btn));
console.log(Boolean(BigInt(Number(chain))));