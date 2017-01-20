var Observable = require("FuseJS/Observable");

var recipes = Observable();

var recipeNumber = Observable();
var recipeDetails = Observable();

			fetch("http://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/")
				.then(function(result) {
					result.json().then(function(data) {
						debug_log("Success!");

						for (var i=0; i< 30; i++) {
							var item = data[i];
							recipes.add(item);
						}
					});
				});

					fetch("http://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/41")
						.then(function(result) {
					result.json().then(function(data) {
						debug_log("Success!");

						for (var i=0; i< 30; i++) {
							var item = data[i];
							recipeDetails.add(item);
						}
					});
				});
				

			function recipe_clicked()
				{
				    // TODO: validate login credentials

				    router.goto("RecipePage");
				}

module.exports = {
	recipes: recipes,
	recipe_clicked: recipe_clicked,
	recipeDetails: recipeDetails
		}