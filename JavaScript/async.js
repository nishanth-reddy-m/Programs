let array = ['-','\\','|','/']
let load = 0;

let loading = setInterval(function(){
    console.log(array[load++%array.length]);
},60);

setTimeout(function(){
    clearInterval(loading);
},10000);