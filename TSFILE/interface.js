var area_s = function (d) {
    var side = d.length = d.width;
    console.log("Area::".concat(side * side));
};
area_s({ length: 10, width: 20 });
var area_r = function (d) {
    console.log("Area::".concat(d.length * d.width));
};
area_r({ length: 10, width: 20 });
