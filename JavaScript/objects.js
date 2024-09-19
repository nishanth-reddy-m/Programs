let plain = function(x,y){
    obj = {
        _x:x,
        _y:y,
        get x() {return this._x;},
        get y() {return this._y}
    };
    Object.defineProperty(obj,"_x",{writable:false});
    Object.defineProperty(obj,"_y",{writable:false});
    return obj;
};
object1 = plain(10,20);
object2 = plain(15,30);
console.log(object1.x,object1.y);
console.log(object2.x,object2.y);

let fruit = function(name,color){
    let fname = "fruit:"+name;
    let fcolor = "color:"+color;
    return {
        name,
        color,
        getdetails(){return `${fname} -> ${fcolor}`;}
    };
};
object3 = fruit("Apple","Red");
console.log(object3.name,object3.fname);
console.log(object3.getdetails());

let Prime = function(num){
    check = function(x,y){
        if(y>1)
        {
            if(x%y == 0)
            {
                return false;
            }
            else{
                return check(x,y-1);
            }
        }
        return true;
    }
    function loop(temp){
        let result = [];
        while(temp > 1)
        {
            if(check(temp,temp-1))
            {
                result.unshift(temp);
            }
            temp--;
        }
        return result;
    }
    // return {
    //     isPrime(){return check(num,num-1);},
    //     upto(){return loop(num)}
    // };
    this.isPrime = function(){return check(num,num-1);};
    this.upto = function(){return loop(num);};
}
object4 = new Prime(4);
console.log(object4.isPrime());
console.log(object4.upto());
console.log(object4.constructor.name);