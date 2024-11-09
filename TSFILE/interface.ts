interface shape
{
    length :number;
    width :number;

}
var area_s = (d:shape)=>
{
    var side=d.length=d.width;
    console.log(`Area::${side*side}`);}
    area_s({length: 10,width: 20});

    var area_r = (d:shape)=>{
        console.log(`Area::${d.length*d.width}`)
    }
        area_r({ length: 10, width: 20});
            
        

