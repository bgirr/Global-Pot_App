// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_bundle.h>
#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_FuseReactiveEach_Items_Property.h>
#include <_root.MainView.h>
#include <_root.RecipePage.h>
#include <_root.RecipePage.Template.h>
#include <_root.RecipePage.Template1.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
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
static uString* STRINGS[13];
static uType* TYPES[8];

namespace g{

// public partial sealed class RecipePage :2
// {
// static RecipePage() :104
static void RecipePage__cctor_4_fn(uType* __type)
{
    RecipePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"router"*/]);
    RecipePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    RecipePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Items"*/]);
}

static void RecipePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Items");
    ::STRINGS[3] = uString::Const("login_clicked");
    ::STRINGS[4] = uString::Const("data.recipeName");
    ::STRINGS[5] = uString::Const("data.images");
    ::STRINGS[6] = uString::Const("data.selectedIngredients");
    ::STRINGS[7] = uString::Const("TopBar.ux");
    ::STRINGS[8] = uString::Const("Global Pot");
    ::STRINGS[9] = uString::Const("Back");
    ::STRINGS[10] = uString::Const("RecipePage.ux");
    ::STRINGS[11] = uString::Const("Zutaten");
    ::STRINGS[12] = uString::Const("Rating, N\303\244hrwerte, etc.");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(93,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::RecipePage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::RecipePage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::RecipePage, temp_eb3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage, temp2_Items_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::RecipePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RecipePage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Control_type* RecipePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 102;
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
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public RecipePage(Fuse.Navigation.Router router) :108
void RecipePage__ctor_8_fn(RecipePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :114
void RecipePage__InitializeUX_fn(RecipePage* __this)
{
    __this->InitializeUX();
}

// public RecipePage New(Fuse.Navigation.Router router) :108
void RecipePage__New5_fn(::g::Fuse::Navigation::Router* router1, RecipePage** __retval)
{
    *__retval = RecipePage::New5(router1);
}

uSStrong<uArray*> RecipePage::__g_static_nametable1_;
::g::Uno::UX::Selector RecipePage::__selector0_;
::g::Uno::UX::Selector RecipePage::__selector1_;

// public RecipePage(Fuse.Navigation.Router router) [instance] :108
void RecipePage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("RecipePage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :114
void RecipePage::InitializeUX()
{
    uStackFrame __("RecipePage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, RecipePage::__g_static_nametable1());
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp, RecipePage::__selector0());
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp1, RecipePage::__selector1());
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp2, RecipePage::__selector1());
    ::g::Fuse::iOS::StatusBarConfig* temp3 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Controls::DockPanel* temp4 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp5 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp6 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp7 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp9 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp11 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Button* temp12 = ::g::Fuse::Controls::Button::New5();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"login_clicked"*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp13 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp14 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    ::g::Fuse::Reactive::JavaScript* temp15 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp16 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp17 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp18 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp19 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[4/*"data.recipe...*/]);
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New4();
    RecipePage__Template* temp21 = RecipePage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp22 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp1_Items_inst, ::STRINGS[5/*"data.images"*/]);
    ::g::Fuse::Controls::Text* temp23 = ::g::Fuse::Controls::Text::New3();
    RecipePage__Template1* temp24 = RecipePage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp25 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], temp2_Items_inst, ::STRINGS[6/*"data.select...*/]);
    ::g::Fuse::Controls::Text* temp26 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp27 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp28 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp3->IsVisible(false);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->Background(temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp7->LineNumber(2);
    temp7->FileName(::STRINGS[7/*"TopBar.ux"*/]);
    temp7->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Login6d08c768()));
    temp8->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp8, 2);
    temp8->Background(temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp9->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->Value(::STRINGS[8/*"Global Pot"*/]);
    temp10->FontSize(30.0f);
    temp10->Color(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp10->Font(::g::MainView::Patua());
    temp11->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp12->Text(::STRINGS[9/*"Back"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp12, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp15->LineNumber(8);
    temp15->FileName(::STRINGS[10/*"RecipePage.ux"*/]);
    temp15->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::Recipe_API1e1be570()));
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 2);
    temp16->Background(temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp17->AllowedScrollDirections(12);
    temp17->ClipToBounds(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp18->Opacity(10.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp->Font(::g::MainView::Patua());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp20->Orientation(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[6/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp23->Value(::STRINGS[11/*"Zutaten"*/]);
    temp23->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp23->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 0.0f, 0.0f));
    temp23->Font(::g::MainView::Patua());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[6/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp26->Value(::STRINGS[12/*"Rating, Näh...*/]);
    temp26->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp26->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 0.0f, 0.0f));
    temp26->Font(::g::MainView::Patua());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), router);
    Background(temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
}

// public RecipePage New(Fuse.Navigation.Router router) [static] :108
RecipePage* RecipePage::New5(::g::Fuse::Navigation::Router* router1)
{
    RecipePage* obj1 = (RecipePage*)uNew(RecipePage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
