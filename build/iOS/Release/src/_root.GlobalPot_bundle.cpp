// This file was generated based on 'F:\Global Pot_App\Global Pot.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[11];

namespace g{

// public static generated class GlobalPot_bundle :0
// {
// static GlobalPot_bundle() :0
static void GlobalPot_bundle__cctor__fn(uType* __type)
{
    GlobalPot_bundle::leftarrow1b28ddd4_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[1/*"left-arrow-...*/]);
    GlobalPot_bundle::Login35138848_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[2/*"login-2780f...*/]);
    GlobalPot_bundle::logo_v027e5cb5e9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[3/*"logo_v02-b3...*/]);
    GlobalPot_bundle::PatuaOneRegular46f4083c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[4/*"patuaone-re...*/]);
    GlobalPot_bundle::Recipe_APIdb3d6fac_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[5/*"recipe_api-...*/]);
    GlobalPot_bundle::Recipes_APIb58471d9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[6/*"recipes_api...*/]);
    GlobalPot_bundle::Refresh24f88517_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[7/*"refresh-915...*/]);
    GlobalPot_bundle::RobotoCondensedRegular17271ad1_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[8/*"robotoconde...*/]);
    GlobalPot_bundle::visitedb1f9eb7f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[9/*"visited-0b5...*/]);
    GlobalPot_bundle::VisitedOverlay56e38aa1_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Global Pot"*/]))->GetFile(::STRINGS[10/*"visitedover...*/]);
}

static void GlobalPot_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Global Pot");
    ::STRINGS[1] = uString::Const("left-arrow-ed42dcf4.png");
    ::STRINGS[2] = uString::Const("login-2780f460.js");
    ::STRINGS[3] = uString::Const("logo_v02-b39e239f.png");
    ::STRINGS[4] = uString::Const("patuaone-regular-e78844ec.ttf");
    ::STRINGS[5] = uString::Const("recipe_api-6aeac55c.js");
    ::STRINGS[6] = uString::Const("recipes_api-e50f47ab.js");
    ::STRINGS[7] = uString::Const("refresh-915e9991.png");
    ::STRINGS[8] = uString::Const("robotocondensed-reg-00fd0f33.ttf");
    ::STRINGS[9] = uString::Const("visited-0b56dd29.png");
    ::STRINGS[10] = uString::Const("visitedoverlay-caf9e447.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::leftarrow1b28ddd4_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::Login35138848_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::logo_v027e5cb5e9_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::PatuaOneRegular46f4083c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::Recipe_APIdb3d6fac_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::Recipes_APIb58471d9_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::Refresh24f88517_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::RobotoCondensedRegular17271ad1_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::visitedb1f9eb7f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::GlobalPot_bundle::VisitedOverlay56e38aa1_, uFieldFlagsStatic);
}

uClassType* GlobalPot_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("GlobalPot_bundle", options);
    type->fp_build_ = GlobalPot_bundle_build;
    type->fp_cctor_ = GlobalPot_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::leftarrow1b28ddd4_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::Login35138848_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::logo_v027e5cb5e9_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::PatuaOneRegular46f4083c_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::Recipe_APIdb3d6fac_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::Recipes_APIb58471d9_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::Refresh24f88517_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::RobotoCondensedRegular17271ad1_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::visitedb1f9eb7f_;
uSStrong< ::g::Uno::IO::BundleFile*> GlobalPot_bundle::VisitedOverlay56e38aa1_;
// }

} // ::g
