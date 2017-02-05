// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\OverviewPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.MainView.h>
#include <_root.OverviewPage.Template.h>
#include <_root.OverviewPage.Template.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
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
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[2];
static uType* TYPES[3];

namespace g{

// public partial sealed class OverviewPage.Template.Template1 :16
// {
// static Template1() :26
static void OverviewPage__Template__Template1__cctor__fn(uType* __type)
{
    OverviewPage__Template__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void OverviewPage__Template__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("recipeName");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::OverviewPage__Template_typeof(), offsetof(::g::OverviewPage__Template__Template1, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::OverviewPage__Template__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::OverviewPage__Template__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OverviewPage__Template__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OverviewPage__Template__Template1__New2_fn, 0, true, type, 2, ::g::OverviewPage__Template_typeof(), ::g::Fuse::Controls::StackPanel_typeof()));
}

::g::Uno::UX::Template_type* OverviewPage__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(OverviewPage__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("OverviewPage.Template.Template1", options);
    type->fp_build_ = OverviewPage__Template__Template1_build;
    type->fp_cctor_ = OverviewPage__Template__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))OverviewPage__Template__Template1__New1_fn;
    return type;
}

// public Template1(OverviewPage.Template parent, Fuse.Controls.StackPanel parentInstance) :20
void OverviewPage__Template__Template1__ctor_1_fn(OverviewPage__Template__Template1* __this, ::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :29
void OverviewPage__Template__Template1__New1_fn(OverviewPage__Template__Template1* __this, uObject** __retval)
{
    uStackFrame __("OverviewPage.Template.Template1", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp, OverviewPage__Template__Template1::__selector0());
    ::g::Fuse::Controls::Panel* temp1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[1/*"recipeName"*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp3 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    temp1->MaxWidth(::g::Uno::UX::Size__New1(300.0f, 1));
    temp1->Alignment(1);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp1->Opacity(0.8f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 2);
    temp1->Background(temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->TextWrapping(1);
    temp->FontSize(20.0f);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Alignment(5);
    temp->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp->Font(::g::MainView::Patua());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = self, void();
}

// public Template1 New(OverviewPage.Template parent, Fuse.Controls.StackPanel parentInstance) :20
void OverviewPage__Template__Template1__New2_fn(::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance, OverviewPage__Template__Template1** __retval)
{
    *__retval = OverviewPage__Template__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector OverviewPage__Template__Template1::__selector0_;

// public Template1(OverviewPage.Template parent, Fuse.Controls.StackPanel parentInstance) [instance] :20
void OverviewPage__Template__Template1::ctor_1(::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(OverviewPage.Template parent, Fuse.Controls.StackPanel parentInstance) [static] :20
OverviewPage__Template__Template1* OverviewPage__Template__Template1::New2(::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance)
{
    OverviewPage__Template__Template1* obj1 = (OverviewPage__Template__Template1*)uNew(OverviewPage__Template__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
