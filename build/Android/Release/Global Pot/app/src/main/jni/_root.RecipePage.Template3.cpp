// This file was generated based on 'F:\Global Pot_App\.uno\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseControlsTextControl_Value_Property.h>
#include <_root.GlobalPot_FuseReactiveEach_Items_Property.h>
#include <_root.MainView.h>
#include <_root.RecipePage.h>
#include <_root.RecipePage.Template3.h>
#include <_root.RecipePage.Template3.Template4.h>
#include <_root.RecipePage.Template3.Template5.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[5];
static uType* TYPES[5];

namespace g{

// public partial sealed class RecipePage.Template3 :226
// {
// static Template3() :377
static void RecipePage__Template3__cctor__fn(uType* __type)
{
    RecipePage__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Items"*/]);
    RecipePage__Template3::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void RecipePage__Template3_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Items");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("usedIngs");
    ::STRINGS[3] = uString::Const("usedResults");
    ::STRINGS[4] = uString::Const("procedure.nameDe");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template3, __parent1), uFieldFlagsWeak,
        ::g::RecipePage_typeof(), offsetof(::g::RecipePage__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage__Template3, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::RecipePage__Template3, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::RecipePage__Template3, temp2_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template3::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::RecipePage__Template3::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* RecipePage__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(RecipePage__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("RecipePage.Template3", options);
    type->fp_build_ = RecipePage__Template3_build;
    type->fp_cctor_ = RecipePage__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))RecipePage__Template3__New1_fn;
    return type;
}

// public Template3(RecipePage parent, RecipePage parentInstance) :230
void RecipePage__Template3__ctor_1_fn(RecipePage__Template3* __this, ::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :380
void RecipePage__Template3__New1_fn(RecipePage__Template3* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Rectangle* self = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    __this->temp_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp, RecipePage__Template3::__selector0());
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    __this->temp1_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(temp1, RecipePage__Template3::__selector0());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::GlobalPot_FuseControlsTextControl_Value_Property::New1(temp2, RecipePage__Template3::__selector1());
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New4();
    RecipePage__Template3__Template4* temp4 = RecipePage__Template3__Template4::New2(__this, self);
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<object>*/], __this->temp_Items_inst, ::STRINGS[2/*"usedIngs"*/]);
    RecipePage__Template3__Template5* temp6 = RecipePage__Template3__Template5::New2(__this, self);
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<object>*/], __this->temp1_Items_inst, ::STRINGS[3/*"usedResults"*/]);
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp9 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp2_Value_inst, ::STRINGS[4/*"procedure.n...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6313726f, 0.8196079f, 0.9137255f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp11 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8941177f, 0.3921569f, 0.04313726f, 1.0f));
    temp3->ItemSpacing(0.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp8->MinWidth(::g::Uno::UX::Size__New1(100.0f, 4));
    temp8->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp8, 3);
    temp8->Background(temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->Margin(::g::Uno::Float4__New2(95.0f, 0.0f, 0.0f, 0.0f));
    temp2->Font(::g::MainView::Roboto());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    self->Fill(temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    return *__retval = self, void();
}

// public Template3 New(RecipePage parent, RecipePage parentInstance) :230
void RecipePage__Template3__New2_fn(::g::RecipePage* parent, ::g::RecipePage* parentInstance, RecipePage__Template3** __retval)
{
    *__retval = RecipePage__Template3::New2(parent, parentInstance);
}

::g::Uno::UX::Selector RecipePage__Template3::__selector0_;
::g::Uno::UX::Selector RecipePage__Template3::__selector1_;

// public Template3(RecipePage parent, RecipePage parentInstance) [instance] :230
void RecipePage__Template3::ctor_1(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(RecipePage parent, RecipePage parentInstance) [static] :230
RecipePage__Template3* RecipePage__Template3::New2(::g::RecipePage* parent, ::g::RecipePage* parentInstance)
{
    RecipePage__Template3* obj1 = (RecipePage__Template3*)uNew(RecipePage__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
