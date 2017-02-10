// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\CookingPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CookingPage.Template.h>
#include <_root.CookingPage.Template.Template1.h>
#include <_root.GlobalPot_FuseControlsImage_Url_Property.h>
#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_UnoUXStringConcatOperator_Right_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.StringConcatOperator.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[7];
static uType* TYPES[3];

namespace g{

// public partial sealed class CookingPage.Template.Template1 :16
// {
// static Template1() :30
static void CookingPage__Template__Template1__cctor__fn(uType* __type)
{
    CookingPage__Template__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    CookingPage__Template__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Right"*/]);
    CookingPage__Template__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
    CookingPage__Template__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"__gen2"*/]);
}

static void CookingPage__Template__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Right");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("__gen2");
    ::STRINGS[4] = uString::Const("iconUrl");
    ::STRINGS[5] = uString::Const("nameDe");
    ::STRINGS[6] = uString::Const("https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CookingPage__Template__Template1, __gen2_Url_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CookingPage__Template__Template1, __gen3_Right_inst1), 0,
        ::g::CookingPage__Template_typeof(), offsetof(::g::CookingPage__Template__Template1, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::CookingPage__Template__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CookingPage__Template__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template__Template1::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CookingPage__Template__Template1__New2_fn, 0, true, type, 2, ::g::CookingPage__Template_typeof(), ::g::Fuse::Controls::Panel_typeof()));
}

::g::Uno::UX::Template_type* CookingPage__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(CookingPage__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CookingPage.Template.Template1", options);
    type->fp_build_ = CookingPage__Template__Template1_build;
    type->fp_cctor_ = CookingPage__Template__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CookingPage__Template__Template1__New1_fn;
    return type;
}

// public Template1(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) :20
void CookingPage__Template__Template1__ctor_1_fn(CookingPage__Template__Template1* __this, ::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :33
void CookingPage__Template__Template1__New1_fn(CookingPage__Template__Template1* __this, uObject** __retval)
{
    uStackFrame __("CookingPage.Template.Template1", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* __gen21 = ::g::Fuse::Controls::Image::New3();
    __this->__gen2_Url_inst1 = ::g::GlobalPot_FuseControlsImage_Url_Property::New1(__gen21, CookingPage__Template__Template1::__selector0());
    ::g::Uno::UX::StringConcatOperator* __gen31 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen3_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen31, CookingPage__Template__Template1::__selector1());
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp, CookingPage__Template__Template1::__selector2());
    ::g::Fuse::Controls::Panel* temp1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->__gen3_Right_inst1, ::STRINGS[4/*"iconUrl"*/]);
    ::g::Fuse::Controls::Panel* temp3 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[5/*"nameDe"*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp5 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2313726f, 0.3490196f, 1.0f));
    self->MinWidth(::g::Uno::UX::Size__New1(100.0f, 4));
    self->MinHeight(::g::Uno::UX::Size__New1(100.0f, 4));
    self->Alignment(4);
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp1->MinWidth(::g::Uno::UX::Size__New1(40.0f, 1));
    temp1->MinHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    temp1->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen21);
    __gen21->MaxWidth(::g::Uno::UX::Size__New1(30.0f, 1));
    __gen21->MaxHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    __gen21->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    __gen21->Name(CookingPage__Template__Template1::__selector3());
    ::g::Fuse::Controls::DockPanel::SetDock(__gen21, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__gen21->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    __gen31->Left(::STRINGS[6/*"https://coo...*/]);
    __gen31->Target(__this->__gen2_Url_inst1);
    temp3->MinWidth(::g::Uno::UX::Size__New1(40.0f, 1));
    temp3->MinHeight(::g::Uno::UX::Size__New1(30.0f, 1));
    temp3->Margin(::g::Uno::Float4__New2(40.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    self->Background(temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    return *__retval = self, void();
}

// public Template1 New(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) :20
void CookingPage__Template__Template1__New2_fn(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance, CookingPage__Template__Template1** __retval)
{
    *__retval = CookingPage__Template__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CookingPage__Template__Template1::__selector0_;
::g::Uno::UX::Selector CookingPage__Template__Template1::__selector1_;
::g::Uno::UX::Selector CookingPage__Template__Template1::__selector2_;
::g::Uno::UX::Selector CookingPage__Template__Template1::__selector3_;

// public Template1(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) [instance] :20
void CookingPage__Template__Template1::ctor_1(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) [static] :20
CookingPage__Template__Template1* CookingPage__Template__Template1::New2(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    CookingPage__Template__Template1* obj1 = (CookingPage__Template__Template1*)uNew(CookingPage__Template__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
