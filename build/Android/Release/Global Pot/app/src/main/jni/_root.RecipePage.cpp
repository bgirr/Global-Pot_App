// This file was generated based on 'F:\Global Pot_App\.uno\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_bundle.h>
#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_FuseElementsElement_Opacity_Property.h>
#include <_root.GlobalPot_FusePhysicsPointAttractor_Radius_Property.h>
#include <_root.GlobalPot_FusePhysicsPointAttractor_Strength_Property.h>
#include <_root.GlobalPot_FuseReactiveEach_Items_Property.h>
#include <_root.GlobalPot_FuseTriggersWhileBool_Value_Property.h>
#include <_root.MainView.h>
#include <_root.RecipePage.h>
#include <_root.RecipePage.Template.h>
#include <_root.RecipePage.Template1.h>
#include <_root.RecipePage.Template2.h>
#include <_root.RecipePage.Template3.h>
#include <_root.RecipePage.Template4.h>
#include <_root.RecipePage.Template5.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Physics.PointAttractor.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[25];
static uType* TYPES[11];

namespace g{

// public partial sealed class RecipePage :2
// {
// static RecipePage() :863
static void RecipePage__cctor_4_fn(uType* __type)
{
    RecipePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"centerAttra...*/], ::STRINGS[2/*"notVisitedA...*/], ::STRINGS[3/*"visitedAttr...*/]);
    RecipePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Opacity"*/]);
    RecipePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Items"*/]);
    RecipePage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Value"*/]);
    RecipePage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Radius"*/]);
    RecipePage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Strength"*/]);
    RecipePage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"centerAttra...*/]);
    RecipePage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"notVisitedA...*/]);
    RecipePage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"visitedAttr...*/]);
}

static void RecipePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("centerAttractor");
    ::STRINGS[2] = uString::Const("notVisitedAttractor");
    ::STRINGS[3] = uString::Const("visitedAttractor");
    ::STRINGS[4] = uString::Const("Opacity");
    ::STRINGS[5] = uString::Const("Items");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("Radius");
    ::STRINGS[8] = uString::Const("Strength");
    ::STRINGS[9] = uString::Const("overview_clicked");
    ::STRINGS[10] = uString::Const("Rezept");
    ::STRINGS[11] = uString::Const("Rezept.selectedIngredients");
    ::STRINGS[12] = uString::Const("recipe.steps[0].usedIngs[0].ingredient[0].nameDe");
    ::STRINGS[13] = uString::Const("recipe.steps");
    ::STRINGS[14] = uString::Const("Rezept.steps");
    ::STRINGS[15] = uString::Const("resetting");
    ::STRINGS[16] = uString::Const("reset");
    ::STRINGS[17] = uString::Const("TopBar.ux");
    ::STRINGS[18] = uString::Const("Global Pot");
    ::STRINGS[19] = uString::Const("RecipePage.ux");
    ::STRINGS[20] = uString::Const("Zutaten");
    ::STRINGS[21] = uString::Const("Zubereitung");
    ::STRINGS[22] = uString::Const("CookingPage.ux");
    ::STRINGS[23] = uString::Const("var Observable = require(\"FuseJS/Observable\");\n"
        "\n"
        "\t\t\tvar resetting = Observable(false);\n"
        "\t\t\t            \t\t\n"
        "\t\t\tfunction reset(x) {\n"
        "\t\t\t\tresetting.value = true;\n"
        "\t\t\t\tsetTimeout(backToNormal, 300);\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tfunction backToNormal() {\n"
        "\t\t\t\tresetting.value = false;\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tmodule.exports = {\n"
        "\t\t\t    reset: reset,\n"
        "\t\t\t\tresetting: resetting\n"
        "\t\t\t\t\n"
        "\t\t\t};\n"
        "\n"
        "\t\t\treset();");
    ::STRINGS[24] = uString::Const("Guten Appetit!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(101,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::RecipePage, __g_nametable1), 0,
        ::g::Fuse::Physics::PointAttractor_typeof(), offsetof(::g::RecipePage, centerAttractor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::RecipePage, centerAttractor_Radius_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::RecipePage, centerAttractor_Strength_inst), 0,
        ::g::Fuse::Physics::PointAttractor_typeof(), offsetof(::g::RecipePage, notVisitedAttractor), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::RecipePage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::RecipePage, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::RecipePage, temp_eb3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp3_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp4_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::RecipePage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::RecipePage, this_Opacity_inst), 0,
        ::g::Fuse::Physics::PointAttractor_typeof(), offsetof(::g::RecipePage, visitedAttractor), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::RecipePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector7_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* RecipePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 126;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(RecipePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("RecipePage", options);
    type->fp_build_ = RecipePage_build;
    type->fp_cctor_ = RecipePage__cctor_4_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public RecipePage(Fuse.Navigation.Router router) :867
void RecipePage__ctor_8_fn(RecipePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :873
void RecipePage__InitializeUX_fn(RecipePage* __this)
{
    __this->InitializeUX();
}

// public RecipePage New(Fuse.Navigation.Router router) :867
void RecipePage__New5_fn(::g::Fuse::Navigation::Router* router1, RecipePage** __retval)
{
    *__retval = RecipePage::New5(router1);
}

uSStrong<uArray*> RecipePage::__g_static_nametable1_;
::g::Uno::UX::Selector RecipePage::__selector0_;
::g::Uno::UX::Selector RecipePage::__selector1_;
::g::Uno::UX::Selector RecipePage::__selector2_;
::g::Uno::UX::Selector RecipePage::__selector3_;
::g::Uno::UX::Selector RecipePage::__selector4_;
::g::Uno::UX::Selector RecipePage::__selector5_;
::g::Uno::UX::Selector RecipePage::__selector6_;
::g::Uno::UX::Selector RecipePage::__selector7_;

// public RecipePage(Fuse.Navigation.Router router) [instance] :867
void RecipePage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :873
void RecipePage::InitializeUX()
{
    this_Opacity_inst = ::g::GlobalPot_FuseElementsElement_Opacity_Property::New1(this, RecipePage::__selector0());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, RecipePage::__g_static_nametable1());
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp, RecipePage::__selector1());
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp1, RecipePage::__selector1());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp2, RecipePage::__selector2());
    ::g::Fuse::Reactive::Each* temp3 = ::g::Fuse::Reactive::Each::New4();
    temp3_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp3, RecipePage::__selector1());
    ::g::Fuse::Reactive::Each* temp4 = ::g::Fuse::Reactive::Each::New4();
    temp4_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp4, RecipePage::__selector1());
    centerAttractor = ::g::Fuse::Physics::PointAttractor::New2();
    centerAttractor_Radius_inst = ::g::GlobalPot_FusePhysicsPointAttractor_Radius_Property::New1(centerAttractor, RecipePage::__selector3());
    centerAttractor_Strength_inst = ::g::GlobalPot_FusePhysicsPointAttractor_Strength_Property::New1(centerAttractor, RecipePage::__selector4());
    ::g::Fuse::Triggers::WhileTrue* temp5 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp5_Value_inst = ::g::GlobalPot_FuseTriggersWhileBool_Value_Property::New1(temp5, RecipePage::__selector2());
    ::g::Fuse::iOS::StatusBarConfig* temp6 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Navigation::EnteringAnimation* temp7 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Move* temp8 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Scale* temp9 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp10 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Controls::DockPanel* temp11 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp12 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp13 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp14 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp15 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp16 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp17 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp19 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Tapped* temp20 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Animations::Scale* temp21 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp22 = ::g::Fuse::Animations::Move::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[9/*"overview_cl...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp23 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp24 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    ::g::Fuse::Reactive::JavaScript* temp25 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp26 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp27 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp28 = ::g::Fuse::Controls::StackPanel::New4();
    RecipePage__Template* temp29 = RecipePage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp30 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp_Items_inst, ::STRINGS[10/*"Rezept"*/]);
    ::g::Fuse::Controls::Text* temp31 = ::g::Fuse::Controls::Text::New3();
    RecipePage__Template1* temp32 = RecipePage__Template1::New2(this, this);
    RecipePage__Template2* middleRectangle = RecipePage__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp33 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp1_Items_inst, ::STRINGS[11/*"Rezept.sele...*/]);
    ::g::Fuse::Controls::Text* temp34 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp35 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[12/*"recipe.step...*/]);
    RecipePage__Template3* temp36 = RecipePage__Template3::New2(this, this);
    RecipePage__Template4* middleRectangle1 = RecipePage__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp37 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp3_Items_inst, ::STRINGS[13/*"recipe.steps"*/]);
    ::g::Fuse::Controls::Panel* temp38 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Page* temp39 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::iOS::StatusBarConfig* temp40 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Controls::DockPanel* temp41 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp42 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp43 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::JavaScript* temp44 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp45 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::iOS::StatusBarConfig* temp46 = ::g::Fuse::iOS::StatusBarConfig::New2();
    RecipePage__Template5* temp47 = RecipePage__Template5::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp48 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp4_Items_inst, ::STRINGS[14/*"Rezept.steps"*/]);
    notVisitedAttractor = ::g::Fuse::Physics::PointAttractor::New2();
    visitedAttractor = ::g::Fuse::Physics::PointAttractor::New2();
    ::g::Fuse::Animations::Change* temp49 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], centerAttractor_Radius_inst);
    ::g::Fuse::Animations::Change* temp50 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], centerAttractor_Strength_inst);
    ::g::Fuse::Reactive::DataBinding* temp51 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<bool>*/], temp5_Value_inst, ::STRINGS[15/*"resetting"*/]);
    ::g::Fuse::Controls::DockPanel* temp52 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp53 = ::g::Fuse::Controls::Image::New3();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[16/*"reset"*/]);
    ::g::Fuse::Controls::Text* temp54 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp55 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp56 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9254902f, 0.9411765f, 0.9607843f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp57 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp58 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp6->IsVisible(false);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    temp8->X(-1.0f);
    temp8->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp9->Factor(0.75f);
    ::g::Fuse::Animations::Change__set_Value_fn(temp10, uCRef(0.7f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->Background(temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp14->LineNumber(2);
    temp14->FileName(::STRINGS[17/*"TopBar.ux"*/]);
    temp14->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipes_APIb58471d9()));
    temp15->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp15->Margin(::g::Uno::Float4__New2(0.0f, 28.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp15, 2);
    temp15->Background(temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp16->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp17->Value(::STRINGS[18/*"Global Pot"*/]);
    temp17->FontSize(30.0f);
    temp17->Color(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp17->Font(::g::MainView::Patua());
    temp18->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp19->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp19->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp19->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp19, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp19->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::leftarrow1b28ddd4()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    temp21->Factor(1.0f);
    temp21->Duration(0.8);
    temp22->X(-3.0f);
    temp22->Duration(0.3);
    temp22->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp22->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp25->LineNumber(14);
    temp25->FileName(::STRINGS[19/*"RecipePage.ux"*/]);
    temp25->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipe_APIdb3d6fac()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Fuse::Controls::DockPanel::SetDock(temp27, 2);
    temp27->Background(temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp28->Opacity(10.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    temp31->Value(::STRINGS[20/*"Zutaten"*/]);
    temp31->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp31->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 0.0f, 0.0f));
    temp31->Font(::g::MainView::Patua());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    temp34->Value(::STRINGS[21/*"Zubereitung"*/]);
    temp34->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp34->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 0.0f, 0.0f));
    temp34->Font(::g::MainView::Patua());
    temp2->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp2->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), middleRectangle1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    temp39->Background(temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp40->IsVisible(false);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Fuse::Controls::DockPanel::SetDock(temp42, 2);
    temp43->LineNumber(8);
    temp43->FileName(::STRINGS[22/*"CookingPage...*/]);
    temp43->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipe_APIdb3d6fac()));
    temp44->Code(::STRINGS[23/*"var Observa...*/]);
    temp44->LineNumber(9);
    temp44->FileName(::STRINGS[22/*"CookingPage...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), centerAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), notVisitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), visitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp46->Style(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp48);
    uPtr(centerAttractor)->Radius(800.0f);
    uPtr(centerAttractor)->Strength(250.0f);
    uPtr(centerAttractor)->Name(RecipePage::__selector5());
    uPtr(notVisitedAttractor)->Offset(::g::Uno::Float3__New2(-400.0f, 0.0f, 0.0f));
    uPtr(notVisitedAttractor)->Radius(380.0f);
    uPtr(notVisitedAttractor)->Strength(600.0f);
    uPtr(notVisitedAttractor)->Name(RecipePage::__selector6());
    uPtr(visitedAttractor)->Offset(::g::Uno::Float3__New2(400.0f, 0.0f, 0.0f));
    uPtr(visitedAttractor)->Radius(380.0f);
    uPtr(visitedAttractor)->Strength(600.0f);
    uPtr(visitedAttractor)->Name(RecipePage::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    ::g::Fuse::Animations::Change__set_Value_fn(temp49, uCRef(8000.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp50, uCRef(10000.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    temp53->Width(::g::Uno::UX::Size__New1(64.0f, 1));
    temp53->Height(::g::Uno::UX::Size__New1(64.0f, 1));
    temp53->Margin(::g::Uno::Float4__New2(70.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp53, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp53->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Refresh24f88517()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp54->Value(::STRINGS[24/*"Guten Appet...*/]);
    temp54->FontSize(30.0f);
    temp54->Color(::g::Fuse::Drawing::Colors::White());
    temp54->Alignment(10);
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 140.0f, 0.0f, 0.0f));
    temp54->Font(::g::MainView::Patua());
    temp55->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp55->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::logo_v027e5cb5e9()));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), centerAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), notVisitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), visitedAttractor);
    Background(temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
}

// public RecipePage New(Fuse.Navigation.Router router) [static] :867
RecipePage* RecipePage::New5(::g::Fuse::Navigation::Router* router1)
{
    RecipePage* obj1 = (RecipePage*)uNew(RecipePage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
