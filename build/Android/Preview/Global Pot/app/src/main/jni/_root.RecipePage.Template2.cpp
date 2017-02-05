// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.RecipePage.h>
#include <_root.RecipePage.Template2.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class RecipePage.Template2 :198
// {
// static Template2() :207
static void RecipePage__Template2__cctor__fn(uType* __type)
{
    RecipePage__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"middleRecta...*/]);
}

static void RecipePage__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("middleRectangle");
    type->SetFields(2,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template2, __parent1), uFieldFlagsWeak,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template2::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RecipePage__Template2__New2_fn, 0, true, type, 2, ::g::RecipePage_typeof(), ::g::RecipePage_typeof()));
}

::g::Uno::UX::Template_type* RecipePage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(RecipePage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("RecipePage.Template2", options);
    type->fp_build_ = RecipePage__Template2_build;
    type->fp_cctor_ = RecipePage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))RecipePage__Template2__New1_fn;
    return type;
}

// public Template2(RecipePage parent, RecipePage parentInstance) :202
void RecipePage__Template2__ctor_1_fn(RecipePage__Template2* __this, ::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :210
void RecipePage__Template2__New1_fn(RecipePage__Template2* __this, uObject** __retval)
{
    uStackFrame __("RecipePage.Template2", "New()");
    ::g::Fuse::Controls::Rectangle* self = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    self->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    self->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 10.0f));
    self->Opacity(0.2f);
    self->Name(RecipePage__Template2::__selector0());
    self->Fill(temp);
    return *__retval = self, void();
}

// public Template2 New(RecipePage parent, RecipePage parentInstance) :202
void RecipePage__Template2__New2_fn(::g::RecipePage* parent, ::g::RecipePage* parentInstance, RecipePage__Template2** __retval)
{
    *__retval = RecipePage__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector RecipePage__Template2::__selector0_;

// public Template2(RecipePage parent, RecipePage parentInstance) [instance] :202
void RecipePage__Template2::ctor_1(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(RecipePage parent, RecipePage parentInstance) [static] :202
RecipePage__Template2* RecipePage__Template2::New2(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    RecipePage__Template2* obj1 = (RecipePage__Template2*)uNew(RecipePage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
