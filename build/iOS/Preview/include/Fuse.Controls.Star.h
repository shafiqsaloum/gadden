// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.2.1/shapes/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Star;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Star :2427
// {
::g::Fuse::Controls::Shape_type* Star_typeof();
void Star__ctor_7_fn(Star* __this);
void Star__CreateSurfacePath_fn(Star* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void Star__New3_fn(Star** __retval);
void Star__get_Points_fn(Star* __this, int* __retval);
void Star__set_Points_fn(Star* __this, int* value);
void Star__get_Ratio_fn(Star* __this, float* __retval);
void Star__set_Ratio_fn(Star* __this, float* value);
void Star__get_RotationDegrees_fn(Star* __this, float* __retval);
void Star__set_RotationDegrees_fn(Star* __this, float* value);
void Star__get_RotationRadians_fn(Star* __this, float* __retval);
void Star__get_RoundRatio_fn(Star* __this, float* __retval);
void Star__set_RoundRatio_fn(Star* __this, float* value);

struct Star : ::g::Fuse::Controls::Shape
{
    float _degrees;
    int _points;
    float _ratio;
    float _roundRatio;

    void ctor_7();
    int Points();
    void Points(int value);
    float Ratio();
    void Ratio(float value);
    float RotationDegrees();
    void RotationDegrees(float value);
    float RotationRadians();
    float RoundRatio();
    void RoundRatio(float value);
    static Star* New3();
};
// }

}}} // ::g::Fuse::Controls
