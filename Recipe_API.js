
var Observable = require("FuseJS/Observable");
var data = Observable();
var recipe_URL = Observable();
var URL = Observable();



var recipe = this.Parameter.map(function(param) {
    return param.recipe;
});

module.exports = {
    recipe: recipe
};



//recipe_URL.value = 'https://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/';
//URL.value = recipe_URL.value;
//debug_log(URL.value);
//    fetch(URL.value)
//    	.then(function(response) { return response.json(); })
//        .then(function(responseObject) { data.value = responseObject; });
//        debug_log('Richtiges JS!');


	
module.exports = {
	data: data,
	URL: URL,
	recipe: recipe
		}