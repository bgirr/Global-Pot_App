// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseControlsImage_Url_Property.h>
#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_UnoUXStringConcatOperator_Right_Property.h>
#include <_root.MainView.h>
#include <_root.RecipePage.h>
#include <_root.RecipePage.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
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
static uType* TYPES[3];

namespace g{

// public partial sealed class RecipePage.Template1 :44
// {
// static Template1() :58
static void RecipePage__Template1__cctor__fn(uType* __type)
{
    RecipePage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    RecipePage__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Url"*/]);
    RecipePage__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Right"*/]);
    RecipePage__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"__gen4"*/]);
}

static void RecipePage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Url");
    ::STRINGS[2] = uString::Const("Right");
    ::STRINGS[3] = uString::Const("__gen4");
    ::STRINGS[4] = uString::Const("ingredient.nameDe");
    ::STRINGS[5] = uString::Const("ingredient.iconUrl");
    ::STRINGS[6] = uString::Const("https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, __gen4_Url_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, __gen5_Right_inst1), 0,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template1, __parent1), uFieldFlagsWeak,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template1::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RecipePage__Template1__New2_fn, 0, true, type, 2, ::g::RecipePage_typeof(), ::g::RecipePage_typeof()));
}

::g::Uno::UX::Template_type* RecipePage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(RecipePage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("RecipePage.Template1", options);
    type->fp_build_ = RecipePage__Template1_build;
    type->fp_cctor_ = RecipePage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))RecipePage__Template1__New1_fn;
    return type;
}

// public Template1(RecipePage parent, RecipePage parentInstance) :48
void RecipePage__Template1__ctor_1_fn(RecipePage__Template1* __this, ::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :61
void RecipePage__Template1__New1_fn(RecipePage__Template1* __this, uObject** __retval)
{
    uStackFrame __("RecipePage.Template1", "New()");
    ::g::Fuse::Controls::Grid* self = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp, RecipePage__Template1::__selector0());
    ::g::Fuse::Controls::Image* __gen41 = ::g::Fuse::Controls::Image::New3();
    __this->__gen4_Url_inst1 = ::g::GlobalPot_FuseControlsImage_Url_Property::New1(__gen41, RecipePage__Template1::__selector1());
    ::g::Uno::UX::StringConcatOperator* __gen51 = ::g::Uno::UX::StringConcatOperator::New2();
    __this->__gen5_Right_inst1 = ::g::GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(__gen51, RecipePage__Template1::__selector2());
    ::g::Fuse::Controls::DockPanel* temp1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[4/*"ingredient....*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->__gen5_Right_inst1, ::STRINGS[5/*"ingredient....*/]);
    self->ColumnCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen41);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    __gen41->MaxWidth(::g::Uno::UX::Size__New1(10.0f, 1));
    __gen41->MaxHeight(::g::Uno::UX::Size__New1(10.0f, 1));
    __gen41->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    __gen41->Name(RecipePage__Template1::__selector3());
    ::g::Fuse::Controls::DockPanel::SetDock(__gen41, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__gen41->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    __gen51->Left(::STRINGS[6/*"https://coo...*/]);
    __gen51->Target(__this->__gen4_Url_inst1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = self, void();
}

// public Template1 New(RecipePage parent, RecipePage parentInstance) :48
void RecipePage__Template1__New2_fn(::g::RecipePage* parent, ::g::RecipePage* parentInstance, RecipePage__Template1** __retval)
{
    *__retval = RecipePage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector RecipePage__Template1::__selector0_;
::g::Uno::UX::Selector RecipePage__Template1::__selector1_;
::g::Uno::UX::Selector RecipePage__Template1::__selector2_;
::g::Uno::UX::Selector RecipePage__Template1::__selector3_;

// public Template1(RecipePage parent, RecipePage parentInstance) [instance] :48
void RecipePage__Template1::ctor_1(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(RecipePage parent, RecipePage parentInstance) [static] :48
RecipePage__Template1* RecipePage__Template1::New2(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    RecipePage__Template1* obj1 = (RecipePage__Template1*)uNew(RecipePage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
