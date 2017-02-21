// This file was generated based on 'F:\Global Pot_App\.uno\ux11\CookingPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CookingPage.h>
#include <_root.CookingPage.Template.h>
#include <_root.GlobalPot_bundle.h>
#include <_root.GlobalPot_FusePhysicsPointAttractor_Radius_Property.h>
#include <_root.GlobalPot_FusePhysicsPointAttractor_Strength_Property.h>
#include <_root.GlobalPot_FuseReactiveEach_Items_Property.h>
#include <_root.GlobalPot_FuseTriggersWhileBool_Value_Property.h>
#include <_root.MainView.h>
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
static uString* STRINGS[17];
static uType* TYPES[10];

namespace g{

// public partial sealed class CookingPage :2
// {
// static CookingPage() :416
static void CookingPage__cctor_4_fn(uType* __type)
{
    CookingPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"centerAttra...*/], ::STRINGS[2/*"notVisitedA...*/], ::STRINGS[3/*"visitedAttr...*/]);
    CookingPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Items"*/]);
    CookingPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Radius"*/]);
    CookingPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Strength"*/]);
    CookingPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Value"*/]);
    CookingPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"centerAttra...*/]);
    CookingPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"notVisitedA...*/]);
    CookingPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"visitedAttr...*/]);
}

static void CookingPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("centerAttractor");
    ::STRINGS[2] = uString::Const("notVisitedAttractor");
    ::STRINGS[3] = uString::Const("visitedAttractor");
    ::STRINGS[4] = uString::Const("Items");
    ::STRINGS[5] = uString::Const("Radius");
    ::STRINGS[6] = uString::Const("Strength");
    ::STRINGS[7] = uString::Const("Value");
    ::STRINGS[8] = uString::Const("overview_clicked");
    ::STRINGS[9] = uString::Const("Rezept.steps");
    ::STRINGS[10] = uString::Const("resetting");
    ::STRINGS[11] = uString::Const("reset");
    ::STRINGS[12] = uString::Const("TopBar.ux");
    ::STRINGS[13] = uString::Const("Global Pot");
    ::STRINGS[14] = uString::Const("CookingPage.ux");
    ::STRINGS[15] = uString::Const("var Observable = require(\"FuseJS/Observable\");\n"
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
    ::STRINGS[16] = uString::Const("Guten Appetit!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(101,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::CookingPage, __g_nametable1), 0,
        ::g::Fuse::Physics::PointAttractor_typeof(), offsetof(::g::CookingPage, centerAttractor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::CookingPage, centerAttractor_Radius_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::CookingPage, centerAttractor_Strength_inst), 0,
        ::g::Fuse::Physics::PointAttractor_typeof(), offsetof(::g::CookingPage, notVisitedAttractor), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::CookingPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CookingPage, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CookingPage, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::CookingPage, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::CookingPage, temp1_Value_inst), 0,
        ::g::Fuse::Physics::PointAttractor_typeof(), offsetof(::g::CookingPage, visitedAttractor), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::CookingPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage::__selector6_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* CookingPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(CookingPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("CookingPage", options);
    type->fp_build_ = CookingPage_build;
    type->fp_cctor_ = CookingPage__cctor_4_fn;
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

// public CookingPage(Fuse.Navigation.Router router) :420
void CookingPage__ctor_8_fn(CookingPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :426
void CookingPage__InitializeUX_fn(CookingPage* __this)
{
    __this->InitializeUX();
}

// public CookingPage New(Fuse.Navigation.Router router) :420
void CookingPage__New5_fn(::g::Fuse::Navigation::Router* router1, CookingPage** __retval)
{
    *__retval = CookingPage::New5(router1);
}

uSStrong<uArray*> CookingPage::__g_static_nametable1_;
::g::Uno::UX::Selector CookingPage::__selector0_;
::g::Uno::UX::Selector CookingPage::__selector1_;
::g::Uno::UX::Selector CookingPage::__selector2_;
::g::Uno::UX::Selector CookingPage::__selector3_;
::g::Uno::UX::Selector CookingPage::__selector4_;
::g::Uno::UX::Selector CookingPage::__selector5_;
::g::Uno::UX::Selector CookingPage::__selector6_;

// public CookingPage(Fuse.Navigation.Router router) [instance] :420
void CookingPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :426
void CookingPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, CookingPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp, CookingPage::__selector0());
    centerAttractor = ::g::Fuse::Physics::PointAttractor::New2();
    centerAttractor_Radius_inst = ::g::GlobalPot_FusePhysicsPointAttractor_Radius_Property::New1(centerAttractor, CookingPage::__selector1());
    centerAttractor_Strength_inst = ::g::GlobalPot_FusePhysicsPointAttractor_Strength_Property::New1(centerAttractor, CookingPage::__selector2());
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp1_Value_inst = ::g::GlobalPot_FuseTriggersWhileBool_Value_Property::New1(temp1, CookingPage::__selector3());
    ::g::Fuse::iOS::StatusBarConfig* temp2 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Controls::DockPanel* temp3 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp4 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp5 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp7 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp10 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp11 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Tapped* temp12 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Animations::Scale* temp13 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp14 = ::g::Fuse::Animations::Move::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[8/*"overview_cl...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    ::g::Fuse::Reactive::JavaScript* temp17 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::JavaScript* temp18 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp19 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::iOS::StatusBarConfig* temp20 = ::g::Fuse::iOS::StatusBarConfig::New2();
    CookingPage__Template* temp21 = CookingPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp22 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<object>*/], temp_Items_inst, ::STRINGS[9/*"Rezept.steps"*/]);
    notVisitedAttractor = ::g::Fuse::Physics::PointAttractor::New2();
    visitedAttractor = ::g::Fuse::Physics::PointAttractor::New2();
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], centerAttractor_Radius_inst);
    ::g::Fuse::Animations::Change* temp24 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], centerAttractor_Strength_inst);
    ::g::Fuse::Reactive::DataBinding* temp25 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], temp1_Value_inst, ::STRINGS[10/*"resetting"*/]);
    ::g::Fuse::Controls::DockPanel* temp26 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp27 = ::g::Fuse::Controls::Image::New3();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[11/*"reset"*/]);
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp29 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp30 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9254902f, 0.9411765f, 0.9607843f, 1.0f));
    temp2->IsVisible(false);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->Background(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp6->LineNumber(2);
    temp6->FileName(::STRINGS[12/*"TopBar.ux"*/]);
    temp6->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipes_APIb58471d9()));
    temp7->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 2);
    temp7->Background(temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp8->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->Value(::STRINGS[13/*"Global Pot"*/]);
    temp9->FontSize(30.0f);
    temp9->Color(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp9->Font(::g::MainView::Patua());
    temp10->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp11->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp11->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp11->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp11, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp11->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::leftarrow1b28ddd4()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    temp13->Factor(1.0f);
    temp13->Duration(0.8);
    temp14->X(-3.0f);
    temp14->Duration(0.3);
    temp14->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp14->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp17->LineNumber(8);
    temp17->FileName(::STRINGS[14/*"CookingPage...*/]);
    temp17->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipe_APIdb3d6fac()));
    temp18->Code(::STRINGS[15/*"var Observa...*/]);
    temp18->LineNumber(9);
    temp18->FileName(::STRINGS[14/*"CookingPage...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), centerAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), notVisitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), visitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp20->Style(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    uPtr(centerAttractor)->Radius(800.0f);
    uPtr(centerAttractor)->Strength(250.0f);
    uPtr(centerAttractor)->Name(CookingPage::__selector4());
    uPtr(notVisitedAttractor)->Offset(::g::Uno::Float3__New2(-400.0f, 0.0f, 0.0f));
    uPtr(notVisitedAttractor)->Radius(380.0f);
    uPtr(notVisitedAttractor)->Strength(600.0f);
    uPtr(notVisitedAttractor)->Name(CookingPage::__selector5());
    uPtr(visitedAttractor)->Offset(::g::Uno::Float3__New2(400.0f, 0.0f, 0.0f));
    uPtr(visitedAttractor)->Radius(380.0f);
    uPtr(visitedAttractor)->Strength(600.0f);
    uPtr(visitedAttractor)->Name(CookingPage::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(8000.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp24, uCRef(10000.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp27->Width(::g::Uno::UX::Size__New1(64.0f, 1));
    temp27->Height(::g::Uno::UX::Size__New1(64.0f, 1));
    temp27->Margin(::g::Uno::Float4__New2(70.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp27, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    temp27->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Refresh24f88517()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp28->Value(::STRINGS[16/*"Guten Appet...*/]);
    temp28->FontSize(30.0f);
    temp28->Color(::g::Fuse::Drawing::Colors::White());
    temp28->Alignment(10);
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 140.0f, 0.0f, 0.0f));
    temp28->Font(::g::MainView::Patua());
    temp29->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp29->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::logo_v027e5cb5e9()));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), centerAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), notVisitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), visitedAttractor);
    Background(temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
}

// public CookingPage New(Fuse.Navigation.Router router) [static] :420
CookingPage* CookingPage::New5(::g::Fuse::Navigation::Router* router1)
{
    CookingPage* obj1 = (CookingPage*)uNew(CookingPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
