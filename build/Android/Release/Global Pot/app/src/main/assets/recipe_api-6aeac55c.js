
var Observable = require("FuseJS/Observable");
var recipe = Observable();
var Rezept = Observable();

var recipe = this.Parameter.map(function(param) {
    debug_log("Die ID ist hier:" + param.recipe);
    var p2 = fetch('http://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/' + param.recipe)
                        p2.then(function(response) { return response.json(); })
                        .then(function(responseObject) { 
                            Rezept.value = responseObject; 
                                debug_log("Hier sind wir");
                        });
});


module.exports = {
	recipe: recipe,
	Rezept: Rezept
		}