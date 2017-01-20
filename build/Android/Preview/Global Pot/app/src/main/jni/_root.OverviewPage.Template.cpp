// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\OverviewPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_FuseReactiveEach_Items_Property.h>
#include <_root.MainView.h>
#include <_root.OverviewPage.h>
#include <_root.OverviewPage.Template.h>
#include <_root.OverviewPage.Template.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Instantiator.h>
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
static uString* STRINGS[5];
static uType* TYPES[6];

namespace g{

// public partial sealed class OverviewPage.Template :6
// {
// static Template() :53
static void OverviewPage__Template__cctor__fn(uType* __type)
{
    OverviewPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Items"*/]);
    OverviewPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void OverviewPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Items");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("images");
    ::STRINGS[3] = uString::Const("recipe_clicked");
    ::STRINGS[4] = uString::Const("recipeName");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    type->SetFields(2,
        ::g::OverviewPage_typeof(), offsetof(::g::OverviewPage__Template, __parent1), uFieldFlagsWeak,
        ::g::OverviewPage_typeof(), offsetof(::g::OverviewPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::OverviewPage__Template, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::OverviewPage__Template, temp1_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OverviewPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OverviewPage__Template::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OverviewPage__Template__New2_fn, 0, true, type, 2, ::g::OverviewPage_typeof(), ::g::OverviewPage_typeof()));
}

::g::Uno::UX::Template_type* OverviewPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(OverviewPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("OverviewPage.Template", options);
    type->fp_build_ = OverviewPage__Template_build;
    type->fp_cctor_ = OverviewPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))OverviewPage__Template__New1_fn;
    return type;
}

// public Template(OverviewPage parent, OverviewPage parentInstance) :10
void OverviewPage__Template__ctor_1_fn(OverviewPage__Template* __this, ::g::OverviewPage* parent, ::g::OverviewPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :56
void OverviewPage__Template__New1_fn(OverviewPage__Template* __this, uObject** __retval)
{
    uStackFrame __("OverviewPage.Template", "New()");
    ::g::Fuse::Controls::StackPanel* self = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    __this->temp_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp, OverviewPage__Template::__selector0());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp1, OverviewPage__Template::__selector1());
    ::g::Fuse::Controls::Panel* temp2 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::DockPanel* temp3 = ::g::Fuse::Controls::DockPanel::New4();
    OverviewPage__Template__Template1* __gen0 = OverviewPage__Template__Template1::New2(__this, self);
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<object>*/], __this->temp_Items_inst, ::STRINGS[2/*"images"*/]);
    ::g::Fuse::Reactive::EventBinding* temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"recipe_clic...*/]);
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[4/*"recipeName"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp2, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb21));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Template>*/]), __gen0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp1->TextWrapping(1);
    temp1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Alignment(14);
    temp1->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp1->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = self, void();
}

// public Template New(OverviewPage parent, OverviewPage parentInstance) :10
void OverviewPage__Template__New2_fn(::g::OverviewPage* parent, ::g::OverviewPage* parentInstance, OverviewPage__Template** __retval)
{
    *__retval = OverviewPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector OverviewPage__Template::__selector0_;
::g::Uno::UX::Selector OverviewPage__Template::__selector1_;

// public Template(OverviewPage parent, OverviewPage parentInstance) [instance] :10
void OverviewPage__Template::ctor_1(::g::OverviewPage* parent, ::g::OverviewPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(OverviewPage parent, OverviewPage parentInstance) [static] :10
OverviewPage__Template* OverviewPage__Template::New2(::g::OverviewPage* parent, ::g::OverviewPage* parentInstance)
{
    OverviewPage__Template* obj1 = (OverviewPage__Template*)uNew(OverviewPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
