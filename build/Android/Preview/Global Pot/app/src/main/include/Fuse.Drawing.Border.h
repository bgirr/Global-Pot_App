// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Drawing.Polygons\0.44.1\rendering\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{struct Border;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Contour;}}}
namespace g{namespace Fuse{namespace Drawing{struct RendererContext;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class Border :15
// {
uType* Border_typeof();
void Border__ctor__fn(Border* __this, uArray* vertices, float* offset, float* width);
void Border__CalculateStrokeVertices_fn(Border* __this);
void Border__get_Contour_fn(Border* __this, ::g::Fuse::Drawing::Contour** __retval);
void Border__Dispose_fn(Border* __this);
void Border__Draw_fn(Border* __this, ::g::Fuse::Drawing::Brush* s, ::g::Fuse::Drawing::RendererContext* ctx);
void Border__free_DrawCalls_fn(Border* __this);
void Border__GetVertex_fn(Border* __this, int* indexWrap, ::g::Uno::Float2* __retval);
void Border__init_DrawCalls_fn(Border* __this);
void Border__New1_fn(uArray* vertices, float* offset, float* width, Border** __retval);
void Border__get_StrokeVertices_fn(Border* __this, uArray** __retval);
void Border__get_VertexCount_fn(Border* __this, int* __retval);

struct Border : uObject
{
    uStrong< ::g::Fuse::Drawing::Contour*> _contour;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6ce6a1c0;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6d07a1c0;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6d49a1c0;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6daca1c0;
    float _offset;
    uStrong<uArray*> _strokeVertices;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> _vbo;
    uStrong<uArray*> _vertices;
    float _width;
    int Draw_BlendDstAlpha_6daca1c0_7_7_10;
    int Draw_BlendDstRgb_6daca1c0_7_5_9;
    int Draw_BlendSrcAlpha_6daca1c0_7_6_8;
    int Draw_BlendSrcRgb_6daca1c0_7_4_7;

    void ctor_(uArray* vertices, float offset, float width);
    void CalculateStrokeVertices();
    ::g::Fuse::Drawing::Contour* Contour();
    void Dispose();
    void Draw(::g::Fuse::Drawing::Brush* s, ::g::Fuse::Drawing::RendererContext* ctx);
    void free_DrawCalls();
    ::g::Uno::Float2 GetVertex(int indexWrap);
    void init_DrawCalls();
    uArray* StrokeVertices();
    int VertexCount();
    static Border* New1(uArray* vertices, float offset, float width);
};
// }

}}} // ::g::Fuse::Drawing
