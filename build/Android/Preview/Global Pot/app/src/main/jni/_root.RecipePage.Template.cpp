// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseControlsImage_Url_Property.h>
#include <_root.GlobalPot_UnoUXStringConcatOperator_Right_Property.h>
#include <_root.RecipePage.h>
#include <_root.RecipePage.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Elements.Element.h>
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
#include <Uno.UX.StringConcatOperator.h>
static uString* STRINGS[5];
static uType* TYPES[3];

namespace g{

// public partial sealed class RecipePage.Template :6
// {
// static Template() :19
static void RecipePage__Template__cctor__fn(uType* __type)
{
    RecipePage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    RecipePage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Right"*/]);
    RecipePage__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"__gen2"*/]);
}

static void RecipePage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Right");
    ::STRINGS[2] = uString::Const("__gen2");
    ::STRINGS[3] = uString::Const("imageUrl");
    ::STRINGS[4] = uString::Const("https://cookingtest-cookingtest.rhcloud.com/static/resource/img/recipeImages/");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template, __gen2_Url_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template, __gen3_Right_inst1), 0,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template, __parent1), uFieldFlagsWeak,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RecipePage__Template__New2_fn, 0, true, type, 2, ::g::RecipePage_typeof(), ::g::RecipePage_typeof()));
}

::g::Uno::UX::Template_type* RecipePage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(RecipePage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("RecipePage.Template", options);
    type->fp_build_ = RecipePage__Template_build;
    type->fp_cctor_ = RecipePage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))RecipePage__Template__New1_fn;
    return type;
}

// public Template(RecipePage parent, RecipePage parentInstance) :10
void RecipePage__Template__ctor_1_fn(RecipePage__Template* __this, ::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :22
void RecipePage__Template__New1_fn(RecipePage__Template* __this, uObject** __retval)
{
    uStackFrame __("RecipePage.Template", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* __gen21 = ::g::Fuse::Controls::Image::New3();
    __this->__gen2_Url_inst1 = ::g::GlobalPot_FuseControlsImage_Url_Property::New1(__gen21, RecipePage__Template::__selector0());
    ::g::Uno::UX::StringConcatOperator* __gen31 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen3_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen31, RecipePage__Template::__selector1());
    ::g::Fuse::Reactive::DataBinding* temp = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->__gen3_Right_inst1, ::STRINGS[3/*"imageUrl"*/]);
    __gen21->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    __gen21->Name(RecipePage__Template::__selector2());
    ::g::Fuse::Controls::DockPanel::SetDock(__gen21, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__gen21->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp);
    __gen31->Left(::STRINGS[4/*"https://coo...*/]);
    __gen31->Target(__this->__gen2_Url_inst1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen21);
    return *__retval = self, void();
}

// public Template New(RecipePage parent, RecipePage parentInstance) :10
void RecipePage__Template__New2_fn(::g::RecipePage* parent, ::g::RecipePage* parentInstance, RecipePage__Template** __retval)
{
    *__retval = RecipePage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector RecipePage__Template::__selector0_;
::g::Uno::UX::Selector RecipePage__Template::__selector1_;
::g::Uno::UX::Selector RecipePage__Template::__selector2_;

// public Template(RecipePage parent, RecipePage parentInstance) [instance] :10
void RecipePage__Template::ctor_1(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(RecipePage parent, RecipePage parentInstance) [static] :10
RecipePage__Template* RecipePage__Template::New2(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    RecipePage__Template* obj1 = (RecipePage__Template*)uNew(RecipePage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
