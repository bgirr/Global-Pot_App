// This file was generated based on 'F:\Global Pot_App\.uno\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseControlsImage_Url_Property.h>
#include <_root.GlobalPot_UnoUXStringConcatOperator_Right_Property.h>
#include <_root.RecipePage.Template.h>
#include <_root.RecipePage.Template.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
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
#include <Uno.UX.StringConcatOperator.h>
static uString* STRINGS[5];
static uType* TYPES[2];

namespace g{

// public partial sealed class RecipePage.Template.Template1 :16
// {
// static Template1() :28
static void RecipePage__Template__Template1__cctor__fn(uType* __type)
{
    RecipePage__Template__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    RecipePage__Template__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Right"*/]);
    RecipePage__Template__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"__gen2"*/]);
}

static void RecipePage__Template__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Right");
    ::STRINGS[2] = uString::Const("__gen2");
    ::STRINGS[3] = uString::Const("imageUrl");
    ::STRINGS[4] = uString::Const("http://cookingtest-cookingtest.rhcloud.com/static/resource/img/recipeImages/");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template__Template1, __gen3_Right_inst1), 0,
        ::g::RecipePage__Template_typeof(), offsetof(::g::RecipePage__Template__Template1, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::RecipePage__Template__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template__Template1, self_Url_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template__Template1::__selector2_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* RecipePage__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(RecipePage__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("RecipePage.Template.Template1", options);
    type->fp_build_ = RecipePage__Template__Template1_build;
    type->fp_cctor_ = RecipePage__Template__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))RecipePage__Template__Template1__New1_fn;
    return type;
}

// public Template1(RecipePage.Template parent, Fuse.Controls.Panel parentInstance) :20
void RecipePage__Template__Template1__ctor_1_fn(RecipePage__Template__Template1* __this, ::g::RecipePage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :31
void RecipePage__Template__Template1__New1_fn(RecipePage__Template__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Image* self = ::g::Fuse::Controls::Image::New3();
    __this->self_Url_inst = ::g::GlobalPot_FuseControlsImage_Url_Property::New1(self, RecipePage__Template__Template1::__selector0());
    ::g::Uno::UX::StringConcatOperator* __gen31 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen3_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen31, RecipePage__Template__Template1::__selector1());
    ::g::Fuse::Reactive::DataBinding* temp = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->__gen3_Right_inst1, ::STRINGS[3/*"imageUrl"*/]);
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    self->Name(RecipePage__Template__Template1::__selector2());
    ::g::Fuse::Controls::DockPanel::SetDock(self, 0);
    __gen31->Left(::STRINGS[4/*"http://cook...*/]);
    __gen31->Target(__this->self_Url_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp);
    return *__retval = self, void();
}

// public Template1 New(RecipePage.Template parent, Fuse.Controls.Panel parentInstance) :20
void RecipePage__Template__Template1__New2_fn(::g::RecipePage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance, RecipePage__Template__Template1** __retval)
{
    *__retval = RecipePage__Template__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector RecipePage__Template__Template1::__selector0_;
::g::Uno::UX::Selector RecipePage__Template__Template1::__selector1_;
::g::Uno::UX::Selector RecipePage__Template__Template1::__selector2_;

// public Template1(RecipePage.Template parent, Fuse.Controls.Panel parentInstance) [instance] :20
void RecipePage__Template__Template1::ctor_1(::g::RecipePage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(RecipePage.Template parent, Fuse.Controls.Panel parentInstance) [static] :20
RecipePage__Template__Template1* RecipePage__Template__Template1::New2(::g::RecipePage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    RecipePage__Template__Template1* obj1 = (RecipePage__Template__Template1*)uNew(RecipePage__Template__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
