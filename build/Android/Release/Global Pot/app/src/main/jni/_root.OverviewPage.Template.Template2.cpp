// This file was generated based on 'F:\Global Pot_App\.uno\ux11\OverviewPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseControlsImage_Url_Property.h>
#include <_root.GlobalPot_UnoUXStringConcatOperator_Right_Property.h>
#include <_root.OverviewPage.Template.h>
#include <_root.OverviewPage.Template.Template2.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
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
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.StringConcatOperator.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[5];
static uType* TYPES[4];

namespace g{

// public partial sealed class OverviewPage.Template.Template2 :57
// {
// static Template2() :69
static void OverviewPage__Template__Template2__cctor__fn(uType* __type)
{
    OverviewPage__Template__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    OverviewPage__Template__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Right"*/]);
    OverviewPage__Template__Template2::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"__gen0"*/]);
}

static void OverviewPage__Template__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Right");
    ::STRINGS[2] = uString::Const("__gen0");
    ::STRINGS[3] = uString::Const("imageUrl");
    ::STRINGS[4] = uString::Const("http://cookingtest-cookingtest.rhcloud.com/static/resource/img/recipeImages/");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::OverviewPage__Template__Template2, __gen1_Right_inst1), 0,
        ::g::OverviewPage__Template_typeof(), offsetof(::g::OverviewPage__Template__Template2, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::OverviewPage__Template__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::OverviewPage__Template__Template2, self_Url_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OverviewPage__Template__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OverviewPage__Template__Template2::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OverviewPage__Template__Template2::__selector2_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* OverviewPage__Template__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(OverviewPage__Template__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("OverviewPage.Template.Template2", options);
    type->fp_build_ = OverviewPage__Template__Template2_build;
    type->fp_cctor_ = OverviewPage__Template__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))OverviewPage__Template__Template2__New1_fn;
    return type;
}

// public Template2(OverviewPage.Template parent, Fuse.Controls.StackPanel parentInstance) :61
void OverviewPage__Template__Template2__ctor_1_fn(OverviewPage__Template__Template2* __this, ::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :72
void OverviewPage__Template__Template2__New1_fn(OverviewPage__Template__Template2* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Image* self = ::g::Fuse::Controls::Image::New3();
    __this->self_Url_inst = ::g::GlobalPot_FuseControlsImage_Url_Property::New1(self, OverviewPage__Template__Template2::__selector0());
    ::g::Uno::UX::StringConcatOperator* __gen11 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen1_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen11, OverviewPage__Template__Template2::__selector1());
    ::g::Fuse::Triggers::WhileBusy* temp = ::g::Fuse::Triggers::WhileBusy::New2();
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp2 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->__gen1_Right_inst1, ::STRINGS[3/*"imageUrl"*/]);
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    self->Name(OverviewPage__Template__Template2::__selector2());
    ::g::Fuse::Controls::DockPanel::SetDock(self, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->Color(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    temp1->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp1->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Strokes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp2);
    temp2->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    temp2->Width(1.0f);
    __gen11->Left(::STRINGS[4/*"http://cook...*/]);
    __gen11->Target(__this->self_Url_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    return *__retval = self, void();
}

// public Template2 New(OverviewPage.Template parent, Fuse.Controls.StackPanel parentInstance) :61
void OverviewPage__Template__Template2__New2_fn(::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance, OverviewPage__Template__Template2** __retval)
{
    *__retval = OverviewPage__Template__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector OverviewPage__Template__Template2::__selector0_;
::g::Uno::UX::Selector OverviewPage__Template__Template2::__selector1_;
::g::Uno::UX::Selector OverviewPage__Template__Template2::__selector2_;

// public Template2(OverviewPage.Template parent, Fuse.Controls.StackPanel parentInstance) [instance] :61
void OverviewPage__Template__Template2::ctor_1(::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(OverviewPage.Template parent, Fuse.Controls.StackPanel parentInstance) [static] :61
OverviewPage__Template__Template2* OverviewPage__Template__Template2::New2(::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance)
{
    OverviewPage__Template__Template2* obj1 = (OverviewPage__Template__Template2*)uNew(OverviewPage__Template__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
