
var Observable = require("FuseJS/Observable");


var recipe = this.Parameter.map(function(param) {
    return param.recipe;
});



module.exports = {
	recipe: recipe
		}