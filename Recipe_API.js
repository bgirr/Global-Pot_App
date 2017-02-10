
var Observable = require("FuseJS/Observable");
var recipe = Observable();
var Rezept = Observable();

var recipe = this.Parameter.map(function(param) {
    return param.recipe;
});



function recipe_id(){
debug_log("Die ID ist hier:" + recipe.value);
debug_log(recipe.value);
    var p2 = fetch('http://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/' + recipe.value)
                        p2.then(function(response) { return response.json(); })
                        .then(function(responseObject) { 
                            Rezept.value = responseObject; 
                                debug_log("Hier sind wir");
                        });

}

  



module.exports = {
	recipe: recipe,
	recipe_id: recipe_id,
	Rezept: Rezept
		}