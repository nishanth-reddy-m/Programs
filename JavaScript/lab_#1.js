let images = [
    {
        title:"Mona Lisa",
        artist:"Leonardo da Vinci",
        year:1503
    },
    {
        title:"The Last Supper",
        artist:"Leonardo da Vinci",
        year:1495
    },
    {
        title:"Starry Night",
        artist:"Vincent van Gogh",
        year:1889
    },
    {
        title:"The Scream",
        artist:"Edvard Munch",
        year:1893
    },
    {
        title:"Guernica",
        artist:"Pablo Picasso",
        year:1937
    },
    {
        title:"The Kiss",
        artist:"Gustav Klimt",
        year:1907
    },
    {
        title:"Girl With a Pearl Earring",
        artist:"Johannes Vermeer",
        year:1665
    },
    {
        title:"Las Meninas",
        artist:"Diego Velázquez",
        year:1656
    },
    {
        title:"The Creation of Adam",
        artist:"Michelangelo",
        year:1512
    }
]

// 1
images.forEach(
    painting => {
        console.log(`'${painting.title}' by '${painting.artist}' in '${painting.year}'`);
    }
);
console.log();

// 2
let Image = function(title,artist,year){
    this.title = title,
    this.artist = artist,
    this.year = year
};
let getImage = function(title,artist,year){
    return {
        title,
        artist,
        year
    };
};
let images1 = [];
let images2 = [];
images.forEach(
    image => {
        images1.push(new Image(image.title,image.artist,image.year));
    }
);
images1.forEach(
    image => {
        images2.push(getImage(image.title,image.artist,image.year));
    }
);
images2.forEach(
    image => {
        console.log(`${image.title} (${image.artist}, ${image.year})`);
    }
);
console.log();

// 3
Image.prototype.print = function(){
    console.log(`${this.title} (${this.artist}, ${this.year})`);
};
let Images = {
    list:[],
    contains:function(title){
        let Return = false;
        for(let image of this.list){
            if(image.title === title){
                Return = true;
                break;
            }
        }
        return Return;
    },
    add:function(title,artist,year){
        if(!this.contains(title))
        {
            this.list.push(new Image(title,artist,year));
        }
    },
    show:function(){
        this.list.forEach(
            image => {
                image.print();
            }
        );
    },
    clear:function(){
        this.list.length = 0;
    }
};
Images.add('Mona Lisa', 'Leonardo da Vinci', 1503);
Images.add('The Last Supper', 'Leonardo da Vinci', 1495);
Images.add('The Starry Night', 'Vincent van Gogh', 1889);
Images.add('Mona Lisa', 'Leonardo da Vinci', 1503);
Images.show();
Images.clear();
Images.show();
console.log();

// 4
Images.edit = function(title,artist,year){
    for(let image of this.list)
    {
        if(image.title === title)
        {
            image.artist = artist;
            image.year = year;
            break;
        }
    }
};
Images.delete = function(title){
    for(let image in this.list){
        if(this.list[image].title === title){
            this.list.splice(image,1);
            break;
        }
    }
}
Images.add('Mona Lisa', 'Leonardo da Vinci', 1503);
Images.add('The Last Supper', 'Leonardo da Vinci', 1495);
Images.add('The Starry Night', 'Vincent van Gogh', 1889);
Images.edit('Mona Lisa', 'Leonardo da Vinci', 1504);
Images.delete('The Last Supper');
Images.show();
console.log();

// 5
let deepComp = function(a,b){
    if(typeof a === typeof b){
        if(typeof a === "object")
        {    
            if(a.length === b.length){
                let Return = true;
                for(let i in a){
                    Return &&= deepComp(a[i],b[i]);
                    if(!Return){break;}
                }
                return Return;
            }
        }
        else{
            if(a === b){
                return true;
            }
        }    
    }
    return false;
};
let a={x:[1,2,3,4,5], y:0, z: {m:'test', n:false}};
let b={x:[1,2,3,4,5], y:0, z: {m:'test', n:false}};
let c={x:[1,2,3,4,5,6], y:0, z: {m:'test', n:false}};
let d={x:[1,2,3,4], y:0, z: {m:'test', n:false}};
let e={x:[1,2,3,4,5], y:0, z: {m:'test', n:true}};
let f={x:[1,2,3,4,5], y:-1, z: {m:'test', n:false}};
console.time("lap");
console.log(deepComp(a,b)); // -> true
console.log(deepComp(a,c)); // -> false
console.log(deepComp(a,d)); // -> false
console.log(deepComp(a,e)); // -> false
console.log(deepComp(a,f)); // -> false
console.timeEnd("lap");