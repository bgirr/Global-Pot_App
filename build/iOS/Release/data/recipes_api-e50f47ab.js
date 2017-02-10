var Observable = require("FuseJS/Observable");
var recipes = Observable();
var BusyTask = require("FuseJS/BusyTask");

    exports.startLoading = function() {
        var task = new BusyTask(myContent);
        setTimeout(function() {
            task.done();
        }, 4000);
    };


fetch("http://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/")
	.then(function(result) {
		if (result.status !== 200) {
			debug_log(result.status);
		}
	result.json().then(function(data) {
	debug_log("Übersicht ist da!");
	var laenge = data.length;
	for (var i=0; i<laenge; i++) {
	var item = data[i];
	recipes.add(item);

		}
	});
});

function overview_clicked(){
		router.push("OverviewPage");

			}

function recipe_clicked(a){
		var recipe = a.data;
		router.push("RecipePage", { recipe: recipe });
		}

function cooking_clicked(a){
		var recipe = a.data;
		router.push("CookingPage", { recipe: recipe });
		}

		module.exports = {
		recipes: recipes,
		recipe_clicked: recipe_clicked,
		cooking_clicked: cooking_clicked,
		overview_clicked: overview_clicked,
		}