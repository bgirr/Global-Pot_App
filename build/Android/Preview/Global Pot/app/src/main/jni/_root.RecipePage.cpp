// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\RecipePage.g.uno'.
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
// static RecipePage() :456
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
    ::STRINGS[5] = uString::Const("recipe");
    ::STRINGS[6] = uString::Const("recipe.selectedIngredients");
    ::STRINGS[7] = uString::Const("recipe.steps[0].usedIngs[0].ingredient[0].nameDe");
    ::STRINGS[8] = uString::Const("recipe.steps");
    ::STRINGS[9] = uString::Const("cooking_clicked");
    ::STRINGS[10] = uString::Const("TopBar.ux");
    ::STRINGS[11] = uString::Const("Global Pot");
    ::STRINGS[12] = uString::Const("RecipePage.ux");
    ::STRINGS[13] = uString::Const("Zutaten");
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
    type->SetFields(102,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::RecipePage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::RecipePage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::RecipePage, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::RecipePage, temp_eb5), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp3_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::RecipePage, this_Opacity_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::RecipePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RecipePage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
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
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
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

// public RecipePage(Fuse.Navigation.Router router) :460
void RecipePage__ctor_8_fn(RecipePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :466
void RecipePage__InitializeUX_fn(RecipePage* __this)
{
    __this->InitializeUX();
}

// public RecipePage New(Fuse.Navigation.Router router) :460
void RecipePage__New5_fn(::g::Fuse::Navigation::Router* router1, RecipePage** __retval)
{
    *__retval = RecipePage::New5(router1);
}

uSStrong<uArray*> RecipePage::__g_static_nametable1_;
::g::Uno::UX::Selector RecipePage::__selector0_;
::g::Uno::UX::Selector RecipePage::__selector1_;
::g::Uno::UX::Selector RecipePage::__selector2_;

// public RecipePage(Fuse.Navigation.Router router) [instance] :460
void RecipePage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("RecipePage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :466
void RecipePage::InitializeUX()
{
    uStackFrame __("RecipePage", "InitializeUX()");
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
    ::g::Fuse::iOS::StatusBarConfig* temp4 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Navigation::EnteringAnimation* temp5 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Move* temp6 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Scale* temp7 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp8 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Controls::DockPanel* temp9 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp10 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp11 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp12 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp13 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp14 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp16 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp17 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Tapped* temp18 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Animations::Scale* temp19 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp20 = ::g::Fuse::Animations::Move::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[4/*"overview_cl...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp21 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp22 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    ::g::Fuse::Reactive::JavaScript* temp23 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp24 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp25 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp26 = ::g::Fuse::Controls::StackPanel::New4();
    RecipePage__Template* temp27 = RecipePage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp28 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp_Items_inst, ::STRINGS[5/*"recipe"*/]);
    ::g::Fuse::Controls::Text* temp29 = ::g::Fuse::Controls::Text::New3();
    RecipePage__Template1* temp30 = RecipePage__Template1::New2(this, this);
    RecipePage__Template2* middleRectangle = RecipePage__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp31 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp1_Items_inst, ::STRINGS[6/*"recipe.sele...*/]);
    ::g::Fuse::Controls::Text* temp32 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp33 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[7/*"recipe.step...*/]);
    RecipePage__Template3* temp34 = RecipePage__Template3::New2(this, this);
    RecipePage__Template4* middleRectangle1 = RecipePage__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp35 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp3_Items_inst, ::STRINGS[8/*"recipe.steps"*/]);
    ::g::Fuse::Controls::Panel* temp36 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp37 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp38 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp39 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Tapped* temp40 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Animations::Scale* temp41 = ::g::Fuse::Animations::Scale::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[9/*"cooking_cli...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp42 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp43 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp4->IsVisible(false);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    temp6->X(-1.0f);
    temp6->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp7->Factor(0.75f);
    ::g::Fuse::Animations::Change__set_Value_fn(temp8, uCRef(0.7f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Fuse::Controls::DockPanel::SetDock(temp10, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp11->Background(temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp12->LineNumber(2);
    temp12->FileName(::STRINGS[10/*"TopBar.ux"*/]);
    temp12->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipes_APIeb7d723d()));
    temp13->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp13, 2);
    temp13->Background(temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp14->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp15->Value(::STRINGS[11/*"Global Pot"*/]);
    temp15->FontSize(30.0f);
    temp15->Color(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp15->Font(::g::MainView::Patua());
    temp16->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp17->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp17->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp17->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp17, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    temp17->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::leftarrowcb43f68b()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    temp19->Factor(1.0f);
    temp19->Duration(0.8);
    temp20->X(-3.0f);
    temp20->Duration(0.3);
    temp20->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp20->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp23->LineNumber(14);
    temp23->FileName(::STRINGS[12/*"RecipePage.ux"*/]);
    temp23->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipe_API1e1be570()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Fuse::Controls::DockPanel::SetDock(temp25, 2);
    temp25->Background(temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp26->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp26->Opacity(10.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp29->Value(::STRINGS[13/*"Zutaten"*/]);
    temp29->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 0.0f, 0.0f));
    temp29->Font(::g::MainView::Patua());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    temp32->Value(::STRINGS[14/*"Zubereitung"*/]);
    temp32->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp32->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 0.0f, 0.0f));
    temp32->Font(::g::MainView::Patua());
    temp2->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp2->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), middleRectangle1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    temp36->Alignment(8);
    temp36->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp36, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp37->Value(::STRINGS[15/*"Let's cook!"*/]);
    temp37->Color(::g::Fuse::Drawing::Colors::White());
    temp37->Alignment(10);
    temp37->Font(::g::MainView::Patua());
    temp38->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp38->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp38->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp38->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp39->Color(::g::Fuse::Drawing::Colors::White());
    temp39->Width(3.0f);
    temp39->Offset(4.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp41);
    temp41->Factor(0.8f);
    temp41->Duration(0.3);
    temp41->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), router);
    Background(temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
}

// public RecipePage New(Fuse.Navigation.Router router) [static] :460
RecipePage* RecipePage::New5(::g::Fuse::Navigation::Router* router1)
{
    RecipePage* obj1 = (RecipePage*)uNew(RecipePage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
