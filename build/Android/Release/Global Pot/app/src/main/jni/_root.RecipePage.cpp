// This file was generated based on 'F:\Global Pot_App\.uno\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_bundle.h>
#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_FuseElementsElement_Opacity_Property.h>
#include <_root.GlobalPot_FuseReactiveEach_Items_Property.h>
#include <_root.MainView.h>
#include <_root.RecipePage.h>
#include <_root.RecipePage.Template.h>
#include <_root.RecipePage.Template1.h>
#include <_root.RecipePage.Template2.h>
#include <_root.RecipePage.Template3.h>
#include <_root.RecipePage.Template4.h>
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
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
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
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
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
static uString* STRINGS[16];
static uType* TYPES[11];

namespace g{

// public partial sealed class RecipePage :2
// {
// static RecipePage() :457
static void RecipePage__cctor_4_fn(uType* __type)
{
    RecipePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"router"*/]);
    RecipePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Opacity"*/]);
    RecipePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Items"*/]);
    RecipePage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
}

static void RecipePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("Opacity");
    ::STRINGS[2] = uString::Const("Items");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("overview_clicked");
    ::STRINGS[5] = uString::Const("Rezept");
    ::STRINGS[6] = uString::Const("Rezept.recipeName");
    ::STRINGS[7] = uString::Const("Rezept.selectedIngredients");
    ::STRINGS[8] = uString::Const("recipe.steps[0].usedIngs[0].ingredient[0].nameDe");
    ::STRINGS[9] = uString::Const("recipe.steps");
    ::STRINGS[10] = uString::Const("recipe_id");
    ::STRINGS[11] = uString::Const("TopBar.ux");
    ::STRINGS[12] = uString::Const("Global Pot");
    ::STRINGS[13] = uString::Const("RecipePage.ux");
    ::STRINGS[14] = uString::Const("Zubereitung");
    ::STRINGS[15] = uString::Const("Let's cook!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(101,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::RecipePage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::RecipePage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::RecipePage, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::RecipePage, temp_eb6), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp4_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::RecipePage, this_Opacity_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::RecipePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* RecipePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 115;
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

// public RecipePage(Fuse.Navigation.Router router) :461
void RecipePage__ctor_8_fn(RecipePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :467
void RecipePage__InitializeUX_fn(RecipePage* __this)
{
    __this->InitializeUX();
}

// public RecipePage New(Fuse.Navigation.Router router) :461
void RecipePage__New5_fn(::g::Fuse::Navigation::Router* router1, RecipePage** __retval)
{
    *__retval = RecipePage::New5(router1);
}

uSStrong<uArray*> RecipePage::__g_static_nametable1_;
::g::Uno::UX::Selector RecipePage::__selector0_;
::g::Uno::UX::Selector RecipePage::__selector1_;
::g::Uno::UX::Selector RecipePage::__selector2_;

// public RecipePage(Fuse.Navigation.Router router) [instance] :461
void RecipePage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :467
void RecipePage::InitializeUX()
{
    this_Opacity_inst = ::g::GlobalPot_FuseElementsElement_Opacity_Property::New1(this, RecipePage::__selector0());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, RecipePage::__g_static_nametable1());
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp, RecipePage::__selector1());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp1, RecipePage::__selector2());
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp2, RecipePage::__selector1());
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp3, RecipePage::__selector2());
    ::g::Fuse::Reactive::Each* temp4 = ::g::Fuse::Reactive::Each::New4();
    temp4_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp4, RecipePage::__selector1());
    ::g::Fuse::iOS::StatusBarConfig* temp5 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Navigation::EnteringAnimation* temp6 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Move* temp7 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Scale* temp8 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Controls::DockPanel* temp10 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp11 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp12 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp13 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp14 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp15 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp16 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp17 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp18 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Tapped* temp19 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Animations::Scale* temp20 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp21 = ::g::Fuse::Animations::Move::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[4/*"overview_cl...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp22 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp23 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    ::g::Fuse::Reactive::JavaScript* temp24 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp25 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp26 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp27 = ::g::Fuse::Controls::StackPanel::New4();
    RecipePage__Template* temp28 = RecipePage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp29 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp_Items_inst, ::STRINGS[5/*"Rezept"*/]);
    ::g::Fuse::Reactive::DataBinding* temp30 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[6/*"Rezept.reci...*/]);
    RecipePage__Template1* temp31 = RecipePage__Template1::New2(this, this);
    RecipePage__Template2* middleRectangle = RecipePage__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp32 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp2_Items_inst, ::STRINGS[7/*"Rezept.sele...*/]);
    ::g::Fuse::Controls::Text* temp33 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp34 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[8/*"recipe.step...*/]);
    RecipePage__Template3* temp35 = RecipePage__Template3::New2(this, this);
    RecipePage__Template4* middleRectangle1 = RecipePage__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp36 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp4_Items_inst, ::STRINGS[9/*"recipe.steps"*/]);
    ::g::Fuse::Controls::Panel* temp37 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp38 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp39 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp40 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Tapped* temp41 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Animations::Scale* temp42 = ::g::Fuse::Animations::Scale::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[10/*"recipe_id"*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp43 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp44 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp5->IsVisible(false);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    temp7->X(-1.0f);
    temp7->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp8->Factor(0.75f);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(0.7f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp12->Background(temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp13->LineNumber(2);
    temp13->FileName(::STRINGS[11/*"TopBar.ux"*/]);
    temp13->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipes_APIb58471d9()));
    temp14->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 2);
    temp14->Background(temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp15->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp16->Value(::STRINGS[12/*"Global Pot"*/]);
    temp16->FontSize(30.0f);
    temp16->Color(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp16->Font(::g::MainView::Patua());
    temp17->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp18->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp18->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp18->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp18, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    temp18->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::leftarrow1b28ddd4()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    temp20->Factor(1.0f);
    temp20->Duration(0.8);
    temp21->X(-3.0f);
    temp21->Duration(0.3);
    temp21->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp21->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp24->LineNumber(14);
    temp24->FileName(::STRINGS[13/*"RecipePage.ux"*/]);
    temp24->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipe_APIdb3d6fac()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Fuse::Controls::DockPanel::SetDock(temp26, 2);
    temp26->Background(temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp27->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp27->Opacity(10.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 0.0f, 0.0f));
    temp1->Font(::g::MainView::Patua());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    temp33->Value(::STRINGS[14/*"Zubereitung"*/]);
    temp33->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp33->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 0.0f, 0.0f));
    temp33->Font(::g::MainView::Patua());
    temp3->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp3->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), middleRectangle1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp36);
    temp37->Alignment(8);
    temp37->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp37, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp38->Value(::STRINGS[15/*"Let's cook!"*/]);
    temp38->Color(::g::Fuse::Drawing::Colors::White());
    temp38->Alignment(10);
    temp38->Font(::g::MainView::Patua());
    temp39->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp39->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp39->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp39->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp40->Color(::g::Fuse::Drawing::Colors::White());
    temp40->Width(3.0f);
    temp40->Offset(4.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp42);
    temp42->Factor(0.8f);
    temp42->Duration(0.3);
    temp42->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), router);
    Background(temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
}

// public RecipePage New(Fuse.Navigation.Router router) [static] :461
RecipePage* RecipePage::New5(::g::Fuse::Navigation::Router* router1)
{
    RecipePage* obj1 = (RecipePage*)uNew(RecipePage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
