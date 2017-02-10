// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\CookingPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CookingPage.h>
#include <_root.CookingPage.Template.h>
#include <_root.CookingPage.Template.Template1.h>
#include <_root.CookingPage.Template.Template2.h>
#include <_root.GlobalPot_bundle.h>
#include <_root.GlobalPot_FuseControlsImage_File_Property.h>
#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_FuseEffectsDropShadow_Distance_Property.h>
#include <_root.GlobalPot_FuseEffectsDropShadow_Size_Property.h>
#include <_root.GlobalPot_FuseElementsElement_Opacity_Property.h>
#include <_root.GlobalPot_FuseReactiveEach_Items_Property.h>
#include <_root.GlobalPot_FuseRotation_Degrees_Property.h>
#include <_root.GlobalPot_UnoUXStringConcatOperator_Right_Property.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Font.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Physics.Draggable.h>
#include <Fuse.Physics.ForceField.h>
#include <Fuse.Physics.ForceFieldTrigger.h>
#include <Fuse.Physics.InForceFieldAnimation.h>
#include <Fuse.Physics.PointAttractor.h>
#include <Fuse.Physics.WhileDragging.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Rotation.h>
#include <Fuse.Triggers.Actions.BringToFront.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.StringConcatOperator.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[21];
static uType* TYPES[10];

namespace g{

// public partial sealed class CookingPage.Template :6
// {
// static Template() :174
static void CookingPage__Template__cctor__fn(uType* __type)
{
    CookingPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Degrees"*/]);
    CookingPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    CookingPage__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Right"*/]);
    CookingPage__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Items"*/]);
    CookingPage__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"File"*/]);
    CookingPage__Template::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Opacity"*/]);
    CookingPage__Template::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Distance"*/]);
    CookingPage__Template::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Size"*/]);
    CookingPage__Template::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"__gen0"*/]);
    CookingPage__Template::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"visited"*/]);
    CookingPage__Template::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"notVisited"*/]);
    CookingPage__Template::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"visitedOver...*/]);
    CookingPage__Template::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"notVisitedO...*/]);
    CookingPage__Template::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"shadow"*/]);
}

static void CookingPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Degrees");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Right");
    ::STRINGS[3] = uString::Const("Items");
    ::STRINGS[4] = uString::Const("File");
    ::STRINGS[5] = uString::Const("Opacity");
    ::STRINGS[6] = uString::Const("Distance");
    ::STRINGS[7] = uString::Const("Size");
    ::STRINGS[8] = uString::Const("__gen0");
    ::STRINGS[9] = uString::Const("visited");
    ::STRINGS[10] = uString::Const("notVisited");
    ::STRINGS[11] = uString::Const("visitedOverlay");
    ::STRINGS[12] = uString::Const("notVisitedOverlay");
    ::STRINGS[13] = uString::Const("shadow");
    ::STRINGS[14] = uString::Const("degrees");
    ::STRINGS[15] = uString::Const("localId");
    ::STRINGS[16] = uString::Const("allIngs");
    ::STRINGS[17] = uString::Const("usedResults");
    ::STRINGS[18] = uString::Const("procedure.nameDe");
    ::STRINGS[19] = uString::Const("imageKey");
    ::STRINGS[20] = uString::Const("Schritt ");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CookingPage__Template, __gen0_Value_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CookingPage__Template, __gen1_Right_inst1), 0,
        ::g::CookingPage_typeof(), offsetof(::g::CookingPage__Template, __parent1), uFieldFlagsWeak,
        ::g::CookingPage_typeof(), offsetof(::g::CookingPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::CookingPage__Template, shadow_Distance_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::CookingPage__Template, shadow_Size_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::CookingPage__Template, temp_Degrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::CookingPage__Template, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::CookingPage__Template, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CookingPage__Template, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::CookingPage__Template, temp4_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::CookingPage__Template, visited_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::CookingPage__Template, visitedOverlay_Opacity_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CookingPage__Template__New2_fn, 0, true, type, 2, ::g::CookingPage_typeof(), ::g::CookingPage_typeof()));
}

::g::Uno::UX::Template_type* CookingPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 29;
    options.ObjectSize = sizeof(CookingPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CookingPage.Template", options);
    type->fp_build_ = CookingPage__Template_build;
    type->fp_cctor_ = CookingPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CookingPage__Template__New1_fn;
    return type;
}

// public Template(CookingPage parent, CookingPage parentInstance) :10
void CookingPage__Template__ctor_1_fn(CookingPage__Template* __this, ::g::CookingPage* parent, ::g::CookingPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :177
void CookingPage__Template__New1_fn(CookingPage__Template* __this, uObject** __retval)
{
    uStackFrame __("CookingPage.Template", "New()");
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Rotation* temp = ::g::Fuse::Rotation::New2();
    __this->temp_Degrees_inst = ::g::GlobalPot_FuseRotation_Degrees_Property::New1(temp, CookingPage__Template::__selector0());
    ::g::Fuse::Controls::Text* __gen01 = ::g::Fuse::Controls::Text::New3();
    __this->__gen0_Value_inst1 = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(__gen01, CookingPage__Template::__selector1());
    ::g::Uno::UX::StringConcatOperator* __gen11 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen1_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen11, CookingPage__Template::__selector2());
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    __this->temp1_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp1, CookingPage__Template::__selector3());
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    __this->temp2_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp2, CookingPage__Template::__selector3());
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    __this->temp3_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp3, CookingPage__Template::__selector1());
    ::g::Fuse::Controls::Image* temp4 = ::g::Fuse::Controls::Image::New3();
    __this->temp4_File_inst = ::g::GlobalPot_FuseControlsImage_File_Property::New1(temp4, CookingPage__Template::__selector4());
    ::g::Fuse::Controls::Image* visited1 = ::g::Fuse::Controls::Image::New3();
    __this->visited_Opacity_inst = ::g::GlobalPot_FuseElementsElement_Opacity_Property::New1(visited1, CookingPage__Template::__selector5());
    ::g::Fuse::Controls::Image* visitedOverlay1 = ::g::Fuse::Controls::Image::New3();
    __this->visitedOverlay_Opacity_inst = ::g::GlobalPot_FuseElementsElement_Opacity_Property::New1(visitedOverlay1, CookingPage__Template::__selector5());
    ::g::Fuse::Effects::DropShadow* shadow1 = ::g::Fuse::Effects::DropShadow::New2();
    __this->shadow_Distance_inst = ::g::GlobalPot_FuseEffectsDropShadow_Distance_Property::New1(shadow1, CookingPage__Template::__selector6());
    __this->shadow_Size_inst = ::g::GlobalPot_FuseEffectsDropShadow_Size_Property::New1(shadow1, CookingPage__Template::__selector7());
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<float>*/], __this->temp_Degrees_inst, ::STRINGS[14/*"degrees"*/]);
    ::g::Fuse::Controls::StackPanel* temp6 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp8 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->__gen1_Right_inst1, ::STRINGS[15/*"localId"*/]);
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    CookingPage__Template__Template1* temp10 = CookingPage__Template__Template1::New2(__this, self);
    ::g::Fuse::Reactive::DataBinding* temp11 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], __this->temp1_Items_inst, ::STRINGS[16/*"allIngs"*/]);
    CookingPage__Template__Template2* temp12 = CookingPage__Template__Template2::New2(__this, self);
    ::g::Fuse::Reactive::DataBinding* temp13 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], __this->temp2_Items_inst, ::STRINGS[17/*"usedResults"*/]);
    ::g::Fuse::Controls::Panel* temp14 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp15 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp3_Value_inst, ::STRINGS[18/*"procedure.n...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6313726f, 0.8196079f, 0.9137255f, 1.0f));
    ::g::Fuse::Controls::Image* notVisited1 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* notVisitedOverlay1 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp17 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<Uno.UX.FileSource>*/], __this->temp4_File_inst, ::STRINGS[19/*"imageKey"*/]);
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Physics::InForceFieldAnimation* temp19 = ::g::Fuse::Physics::InForceFieldAnimation::New2();
    ::g::Fuse::Animations::Change* temp20 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float>*/], __this->visited_Opacity_inst);
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float>*/], __this->visitedOverlay_Opacity_inst);
    ::g::Fuse::Physics::InForceFieldAnimation* temp22 = ::g::Fuse::Physics::InForceFieldAnimation::New2();
    ::g::Fuse::Animations::Rotate* temp23 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Physics::InForceFieldAnimation* temp24 = ::g::Fuse::Physics::InForceFieldAnimation::New2();
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float>*/], __this->visited_Opacity_inst);
    ::g::Fuse::Animations::Change* temp26 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float>*/], __this->visitedOverlay_Opacity_inst);
    ::g::Fuse::Physics::InForceFieldAnimation* temp27 = ::g::Fuse::Physics::InForceFieldAnimation::New2();
    ::g::Fuse::Animations::Rotate* temp28 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Physics::Draggable* temp29 = ::g::Fuse::Physics::Draggable::New2();
    ::g::Fuse::Physics::WhileDragging* temp30 = ::g::Fuse::Physics::WhileDragging::New2();
    ::g::Fuse::Triggers::Actions::BringToFront* temp31 = ::g::Fuse::Triggers::Actions::BringToFront::New2();
    ::g::Fuse::Animations::Scale* temp32 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp33 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float>*/], __this->shadow_Distance_inst);
    ::g::Fuse::Animations::Change* temp34 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float>*/], __this->shadow_Size_inst);
    self->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    self->Height(::g::Uno::UX::Size__New1(40.0f, 4));
    self->Alignment(14);
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    temp6->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp6->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp6->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), notVisited1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), visitedOverlay1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), notVisitedOverlay1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen01);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), visited1);
    __gen01->FontSize(30.0f);
    __gen01->Alignment(10);
    __gen01->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 0.0f));
    __gen01->Name(CookingPage__Template::__selector8());
    __gen01->Font(::g::MainView::Patua());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__gen01->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    __gen11->Left(::STRINGS[20/*"Schritt "*/]);
    __gen11->Target(__this->__gen0_Value_inst1);
    visited1->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    visited1->Alignment(5);
    visited1->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 0.0f));
    visited1->Opacity(0.0f);
    visited1->Name(CookingPage__Template::__selector9());
    visited1->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::visiteda8deaa24()));
    temp9->MinWidth(::g::Uno::UX::Size__New1(100.0f, 4));
    temp9->MinHeight(::g::Uno::UX::Size__New1(100.0f, 4));
    temp9->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp14->MinWidth(::g::Uno::UX::Size__New1(100.0f, 4));
    temp14->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp14, 3);
    temp14->Background(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Margin(::g::Uno::Float4__New2(95.0f, 0.0f, 0.0f, 0.0f));
    temp3->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    notVisited1->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    notVisited1->Alignment(8);
    notVisited1->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 0.0f));
    notVisited1->Opacity(0.0f);
    notVisited1->Name(CookingPage__Template::__selector10());
    notVisited1->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::visiteda8deaa24()));
    visitedOverlay1->StretchMode(6);
    visitedOverlay1->Opacity(0.0f);
    visitedOverlay1->Name(CookingPage__Template::__selector11());
    ::g::Fuse::Controls::DockPanel::SetDock(visitedOverlay1, 4);
    visitedOverlay1->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::VisitedOverlay92b9745e()));
    notVisitedOverlay1->StretchMode(6);
    notVisitedOverlay1->Opacity(0.0f);
    notVisitedOverlay1->Name(CookingPage__Template::__selector12());
    ::g::Fuse::Controls::DockPanel::SetDock(notVisitedOverlay1, 4);
    notVisitedOverlay1->File(::g::Uno::UX::BundleFileSource::New1(::g::GlobalPot_bundle::VisitedOverlay92b9745e()));
    temp4->StretchMode(6);
    temp4->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp18->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp18->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp18->Background(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), shadow1);
    shadow1->Size(2.0f);
    shadow1->Distance(0.0f);
    shadow1->Name(CookingPage__Template::__selector13());
    temp19->From(0.1f);
    temp19->To(0.3f);
    temp19->ForceField(uPtr(__this->__parent1)->visitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp20, uCRef(1.0f));
    temp20->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(1.0f));
    temp21->Duration(1.0);
    temp22->ForceField(uPtr(__this->__parent1)->visitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    temp23->Degrees(-8.0f);
    temp24->From(0.1f);
    temp24->To(0.3f);
    temp24->ForceField(uPtr(__this->__parent1)->notVisitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp26);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(1.0f));
    temp25->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp26, uCRef(1.0f));
    temp26->Duration(1.0);
    temp27->ForceField(uPtr(__this->__parent1)->notVisitedAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp28);
    temp28->Degrees(8.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp31);
    temp32->Factor(1.1f);
    temp32->Duration(0.5);
    temp32->Easing(::g::Fuse::Animations::Easing::BackOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp33, uCRef(20.0f));
    temp33->Duration(0.5);
    temp33->Easing(::g::Fuse::Animations::Easing::BackOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp34, uCRef(20.0f));
    temp34->Duration(0.5);
    temp34->Easing(::g::Fuse::Animations::Easing::BackOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    return *__retval = self, void();
}

// public Template New(CookingPage parent, CookingPage parentInstance) :10
void CookingPage__Template__New2_fn(::g::CookingPage* parent, ::g::CookingPage* parentInstance, CookingPage__Template** __retval)
{
    *__retval = CookingPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CookingPage__Template::__selector0_;
::g::Uno::UX::Selector CookingPage__Template::__selector1_;
::g::Uno::UX::Selector CookingPage__Template::__selector10_;
::g::Uno::UX::Selector CookingPage__Template::__selector11_;
::g::Uno::UX::Selector CookingPage__Template::__selector12_;
::g::Uno::UX::Selector CookingPage__Template::__selector13_;
::g::Uno::UX::Selector CookingPage__Template::__selector2_;
::g::Uno::UX::Selector CookingPage__Template::__selector3_;
::g::Uno::UX::Selector CookingPage__Template::__selector4_;
::g::Uno::UX::Selector CookingPage__Template::__selector5_;
::g::Uno::UX::Selector CookingPage__Template::__selector6_;
::g::Uno::UX::Selector CookingPage__Template::__selector7_;
::g::Uno::UX::Selector CookingPage__Template::__selector8_;
::g::Uno::UX::Selector CookingPage__Template::__selector9_;

// public Template(CookingPage parent, CookingPage parentInstance) [instance] :10
void CookingPage__Template::ctor_1(::g::CookingPage* parent, ::g::CookingPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(CookingPage parent, CookingPage parentInstance) [static] :10
CookingPage__Template* CookingPage__Template::New2(::g::CookingPage* parent, ::g::CookingPage* parentInstance)
{
    CookingPage__Template* obj1 = (CookingPage__Template*)uNew(CookingPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
