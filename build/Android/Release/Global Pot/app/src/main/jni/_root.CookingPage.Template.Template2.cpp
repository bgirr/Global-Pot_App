// This file was generated based on 'F:\Global Pot_App\.uno\ux11\CookingPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CookingPage.Template.h>
#include <_root.CookingPage.Template.Template2.h>
#include <_root.GlobalPot_FuseControlsImage_Url_Property.h>
#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_UnoUXStringConcatOperator_Right_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Triggers.WhileBusy.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.StringConcatOperator.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[7];
static uType* TYPES[4];

namespace g{

// public partial sealed class CookingPage.Template.Template2 :90
// {
// static Template2() :104
static void CookingPage__Template__Template2__cctor__fn(uType* __type)
{
    CookingPage__Template__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    CookingPage__Template__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Right"*/]);
    CookingPage__Template__Template2::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
    CookingPage__Template__Template2::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"__gen4"*/]);
}

static void CookingPage__Template__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Right");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("__gen4");
    ::STRINGS[4] = uString::Const("ingredients.iconUrl");
    ::STRINGS[5] = uString::Const("ingredients.nameDe");
    ::STRINGS[6] = uString::Const("https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CookingPage__Template__Template2, __gen4_Url_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CookingPage__Template__Template2, __gen5_Right_inst1), 0,
        ::g::CookingPage__Template_typeof(), offsetof(::g::CookingPage__Template__Template2, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::CookingPage__Template__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CookingPage__Template__Template2, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template__Template2::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template__Template2::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template__Template2::__selector3_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* CookingPage__Template__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(CookingPage__Template__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CookingPage.Template.Template2", options);
    type->fp_build_ = CookingPage__Template__Template2_build;
    type->fp_cctor_ = CookingPage__Template__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CookingPage__Template__Template2__New1_fn;
    return type;
}

// public Template2(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) :94
void CookingPage__Template__Template2__ctor_1_fn(CookingPage__Template__Template2* __this, ::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :107
void CookingPage__Template__Template2__New1_fn(CookingPage__Template__Template2* __this, uObject** __retval)
{
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* __gen41 = ::g::Fuse::Controls::Image::New3();
    __this->__gen4_Url_inst1 = ::g::GlobalPot_FuseControlsImage_Url_Property::New1(__gen41, CookingPage__Template__Template2::__selector0());
    ::g::Uno::UX::StringConcatOperator* __gen51 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen5_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen51, CookingPage__Template__Template2::__selector1());
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp, CookingPage__Template__Template2::__selector2());
    ::g::Fuse::Controls::Panel* temp1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Triggers::WhileBusy* temp2 = ::g::Fuse::Triggers::WhileBusy::New2();
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp4 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->__gen5_Right_inst1, ::STRINGS[4/*"ingredients...*/]);
    ::g::Fuse::Controls::Panel* temp6 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[5/*"ingredients...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp8 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    temp1->MinWidth(::g::Uno::UX::Size__New1(40.0f, 1));
    temp1->MinHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    temp1->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen41);
    __gen41->MaxWidth(::g::Uno::UX::Size__New1(30.0f, 1));
    __gen41->MaxHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    __gen41->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    __gen41->Name(CookingPage__Template__Template2::__selector3());
    ::g::Fuse::Controls::DockPanel::SetDock(__gen41, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__gen41->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__gen41->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Color(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp4);
    temp4->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    temp4->Width(1.0f);
    __gen51->Left(::STRINGS[6/*"https://coo...*/]);
    __gen51->Target(__this->__gen4_Url_inst1);
    temp6->MinWidth(::g::Uno::UX::Size__New1(40.0f, 1));
    temp6->MinHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    temp6->Margin(::g::Uno::Float4__New2(40.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp6, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    self->Background(temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    return *__retval = self, void();
}

// public Template2 New(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) :94
void CookingPage__Template__Template2__New2_fn(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance, CookingPage__Template__Template2** __retval)
{
    *__retval = CookingPage__Template__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CookingPage__Template__Template2::__selector0_;
::g::Uno::UX::Selector CookingPage__Template__Template2::__selector1_;
::g::Uno::UX::Selector CookingPage__Template__Template2::__selector2_;
::g::Uno::UX::Selector CookingPage__Template__Template2::__selector3_;

// public Template2(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) [instance] :94
void CookingPage__Template__Template2::ctor_1(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) [static] :94
CookingPage__Template__Template2* CookingPage__Template__Template2::New2(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    CookingPage__Template__Template2* obj1 = (CookingPage__Template__Template2*)uNew(CookingPage__Template__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
