const rose_price=8,lily_price=10,tulip_price=2;
let no_of_rose=70,no_of_lily=50,no_of_tulip=120;
let rose_value = rose_price*no_of_rose,lily_value = lily_price*no_of_lily,tulip_value = tulip_price*no_of_tulip;

console.log("Rose","–","unit price:",rose_price, "quantity:",no_of_rose,"value:",rose_value);
console.log("Lily","–","unit price:",lily_price, "quantity:",no_of_lily,"value:",lily_value);
console.log("Tulip","–","unit price:",tulip_price, "quantity:",no_of_tulip,"value:",tulip_value);

console.log("Total =",rose_value+lily_value+tulip_value);

no_of_rose-=20,no_of_lily-=30;
rose_value = rose_price*no_of_rose,lily_value = lily_price*no_of_lily,tulip_value = tulip_price*no_of_tulip;

console.log("Rose","–","unit price:",rose_price, "quantity:",no_of_rose,"value:",rose_value);
console.log("Lily","–","unit price:",lily_price, "quantity:",no_of_lily,"value:",lily_value);
console.log("Tulip","–","unit price:",tulip_price, "quantity:",no_of_tulip,"value:",tulip_value);

console.log("Total =",rose_value+lily_value+tulip_value);
