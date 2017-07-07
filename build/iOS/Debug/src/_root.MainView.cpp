// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_bundle.h>
#include <_root.gadden_FuseCont-61214812.h>
#include <_root.gadden_FuseCont-862d1e68.h>
#include <_root.gadden_FuseElem-aceb110d.h>
#include <_root.gadden_FuseElem-acec0a78.h>
#include <_root.gadden_FuseReac-3db2ace5.h>
#include <_root.Hamburger.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.Paragraph.h>
#include <_root.Profile.h>
#include <_root.Tab.h>
#include <_root.TabText.h>
#include <_root.Title.h>
#include <_root.TitleBig.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Navigat-70e90308.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextView.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Activ-5bc1c951.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.While-89f5a828.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[150];
static uType* TYPES[12];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :104
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[0/*"sidebarProf...*/], ::STRINGS[1/*"shadowProfile"*/], ::STRINGS[2/*"sidebar"*/], ::STRINGS[3/*"shadow"*/], ::STRINGS[4/*"router"*/], ::STRINGS[5/*"sidebarFade"*/], ::STRINGS[6/*"navigation"*/], ::STRINGS[7/*"news"*/], ::STRINGS[8/*"partners"*/], ::STRINGS[9/*"exhibitor"*/], ::STRINGS[10/*"program"*/], ::STRINGS[11/*"icebreaker"*/], ::STRINGS[12/*"sponsors"*/], ::STRINGS[13/*"indicatorSp...*/], ::STRINGS[14/*"SponsorTab"*/], ::STRINGS[15/*"GoodiebagTab"*/], ::STRINGS[16/*"navigationS...*/], ::STRINGS[17/*"sponsor"*/], ::STRINGS[18/*"goodiebag"*/], ::STRINGS[19/*"map"*/], ::STRINGS[20/*"indicator"*/], ::STRINGS[21/*"plan3Tab"*/], ::STRINGS[22/*"plan4Tab"*/], ::STRINGS[23/*"navigationC...*/], ::STRINGS[24/*"plan3"*/], ::STRINGS[25/*"plan4"*/], ::STRINGS[26/*"aboutus"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"Color"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"Opacity"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"Active"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"Items"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"Element.Lay...*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"sidebarProf...*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"shadowProfile"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"sidebar"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"shadow"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"router"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"sidebarFade"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"navigation"*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"news"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"partners"*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"exhibitor"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"program"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"icebreaker"*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"sponsors"*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"indicatorSp...*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"SponsorTab"*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"GoodiebagTab"*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"navigationS...*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"sponsor"*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"goodiebag"*/]);
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"map"*/]);
    MainView::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"indicator"*/]);
    MainView::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"plan3Tab"*/]);
    MainView::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"plan4Tab"*/]);
    MainView::__selector28_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"navigationC...*/]);
    MainView::__selector29_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"plan3"*/]);
    MainView::__selector30_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"plan4"*/]);
    MainView::__selector31_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"aboutus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[32/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[33/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[34/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[35/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[36/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[37/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[38/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[39/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[40/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[41/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[42/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[43/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[44/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[45/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[46/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[47/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[48/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[49/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[50/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[51/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[52/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[53/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[54/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[55/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[56/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[57/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[58/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[59/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[60/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[61/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[62/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[63/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[63/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[64/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[64/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[65/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[65/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[66/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[66/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[67/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[67/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[68/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[68/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[69/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[69/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[70/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[70/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[71/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[71/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[72/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[72/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[73/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[73/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[74/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[74/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[75/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[75/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[76/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[76/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[77/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[77/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[78/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[78/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[79/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[79/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[80/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[81/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[82/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[83/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[84/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[85/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[86/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[87/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[88/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[88/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[89/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[90/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[91/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[91/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[92/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[93/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[94/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[94/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[95/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[96/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[97/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[98/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[99/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[100/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[101/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[102/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[103/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[104/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[105/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[106/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[107/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Raleway_, ::STRINGS[108/*"Raleway"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::RalewayBlack_, ::STRINGS[109/*"RalewayBlack"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::TitleFont_, ::STRINGS[110/*"TitleFont"*/]);
    MainView::Raleway_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::RalewayRegularb6f7e684()));
    MainView::RalewayBlack_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::RalewayBlack5428ecd5()));
    MainView::TitleFont_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::fonted7eb529()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Raleway_, ::STRINGS[108/*"Raleway"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::RalewayBlack_, ::STRINGS[109/*"RalewayBlack"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::TitleFont_, ::STRINGS[110/*"TitleFont"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("sidebarProfile");
    ::STRINGS[1] = uString::Const("shadowProfile");
    ::STRINGS[2] = uString::Const("sidebar");
    ::STRINGS[3] = uString::Const("shadow");
    ::STRINGS[4] = uString::Const("router");
    ::STRINGS[5] = uString::Const("sidebarFade");
    ::STRINGS[6] = uString::Const("navigation");
    ::STRINGS[7] = uString::Const("news");
    ::STRINGS[8] = uString::Const("partners");
    ::STRINGS[9] = uString::Const("exhibitor");
    ::STRINGS[10] = uString::Const("program");
    ::STRINGS[11] = uString::Const("icebreaker");
    ::STRINGS[12] = uString::Const("sponsors");
    ::STRINGS[13] = uString::Const("indicatorSponsor");
    ::STRINGS[14] = uString::Const("SponsorTab");
    ::STRINGS[15] = uString::Const("GoodiebagTab");
    ::STRINGS[16] = uString::Const("navigationSponsors");
    ::STRINGS[17] = uString::Const("sponsor");
    ::STRINGS[18] = uString::Const("goodiebag");
    ::STRINGS[19] = uString::Const("map");
    ::STRINGS[20] = uString::Const("indicator");
    ::STRINGS[21] = uString::Const("plan3Tab");
    ::STRINGS[22] = uString::Const("plan4Tab");
    ::STRINGS[23] = uString::Const("navigationControl");
    ::STRINGS[24] = uString::Const("plan3");
    ::STRINGS[25] = uString::Const("plan4");
    ::STRINGS[26] = uString::Const("aboutus");
    ::STRINGS[27] = uString::Const("Color");
    ::STRINGS[28] = uString::Const("Opacity");
    ::STRINGS[29] = uString::Const("Active");
    ::STRINGS[30] = uString::Const("Items");
    ::STRINGS[31] = uString::Const("Element.LayoutMaster");
    ::STRINGS[32] = uString::Const("Linear");
    ::STRINGS[33] = uString::Const("QuadraticIn");
    ::STRINGS[34] = uString::Const("QuadraticOut");
    ::STRINGS[35] = uString::Const("QuadraticInOut");
    ::STRINGS[36] = uString::Const("CubicIn");
    ::STRINGS[37] = uString::Const("CubicOut");
    ::STRINGS[38] = uString::Const("CubicInOut");
    ::STRINGS[39] = uString::Const("QuarticIn");
    ::STRINGS[40] = uString::Const("QuarticOut");
    ::STRINGS[41] = uString::Const("QuarticInOut");
    ::STRINGS[42] = uString::Const("QuinticIn");
    ::STRINGS[43] = uString::Const("QuinticOut");
    ::STRINGS[44] = uString::Const("QuinticInOut");
    ::STRINGS[45] = uString::Const("SinusoidalIn");
    ::STRINGS[46] = uString::Const("SinusoidalOut");
    ::STRINGS[47] = uString::Const("SinusoidalInOut");
    ::STRINGS[48] = uString::Const("ExponentialIn");
    ::STRINGS[49] = uString::Const("ExponentialOut");
    ::STRINGS[50] = uString::Const("ExponentialInOut");
    ::STRINGS[51] = uString::Const("CircularIn");
    ::STRINGS[52] = uString::Const("CircularOut");
    ::STRINGS[53] = uString::Const("CircularInOut");
    ::STRINGS[54] = uString::Const("ElasticIn");
    ::STRINGS[55] = uString::Const("ElasticOut");
    ::STRINGS[56] = uString::Const("ElasticInOut");
    ::STRINGS[57] = uString::Const("BackIn");
    ::STRINGS[58] = uString::Const("BackOut");
    ::STRINGS[59] = uString::Const("BackInOut");
    ::STRINGS[60] = uString::Const("BounceIn");
    ::STRINGS[61] = uString::Const("BounceOut");
    ::STRINGS[62] = uString::Const("BounceInOut");
    ::STRINGS[63] = uString::Const("Transparent");
    ::STRINGS[64] = uString::Const("Black");
    ::STRINGS[65] = uString::Const("Silver");
    ::STRINGS[66] = uString::Const("Gray");
    ::STRINGS[67] = uString::Const("White");
    ::STRINGS[68] = uString::Const("Maroon");
    ::STRINGS[69] = uString::Const("Red");
    ::STRINGS[70] = uString::Const("Purple");
    ::STRINGS[71] = uString::Const("Fuchsia");
    ::STRINGS[72] = uString::Const("Green");
    ::STRINGS[73] = uString::Const("Lime");
    ::STRINGS[74] = uString::Const("Olive");
    ::STRINGS[75] = uString::Const("Yellow");
    ::STRINGS[76] = uString::Const("Navy");
    ::STRINGS[77] = uString::Const("Blue");
    ::STRINGS[78] = uString::Const("Teal");
    ::STRINGS[79] = uString::Const("Aqua");
    ::STRINGS[80] = uString::Const("TopLeft");
    ::STRINGS[81] = uString::Const("Center");
    ::STRINGS[82] = uString::Const("Anchor");
    ::STRINGS[83] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[84] = uString::Const("VerticalBoxCenter");
    ::STRINGS[85] = uString::Const("TransformOriginOffset");
    ::STRINGS[86] = uString::Const("PositionOffset");
    ::STRINGS[87] = uString::Const("SizeFactor");
    ::STRINGS[88] = uString::Const("Size");
    ::STRINGS[89] = uString::Const("GiveFocus");
    ::STRINGS[90] = uString::Const("Keyboard");
    ::STRINGS[91] = uString::Const("LayoutChange");
    ::STRINGS[92] = uString::Const("WorldPositionChange");
    ::STRINGS[93] = uString::Const("PositionChange");
    ::STRINGS[94] = uString::Const("SizeChange");
    ::STRINGS[95] = uString::Const("Points");
    ::STRINGS[96] = uString::Const("Pixels");
    ::STRINGS[97] = uString::Const("ContentSize");
    ::STRINGS[98] = uString::Const("ScrollViewSize");
    ::STRINGS[99] = uString::Const("PreloadRetain");
    ::STRINGS[100] = uString::Const("UnloadUnused");
    ::STRINGS[101] = uString::Const("UnloadInBackground");
    ::STRINGS[102] = uString::Const("PlatformDefault");
    ::STRINGS[103] = uString::Const("Identity");
    ::STRINGS[104] = uString::Const("Local");
    ::STRINGS[105] = uString::Const("ParentSize");
    ::STRINGS[106] = uString::Const("Width");
    ::STRINGS[107] = uString::Const("Height");
    ::STRINGS[108] = uString::Const("Raleway");
    ::STRINGS[109] = uString::Const("RalewayBlack");
    ::STRINGS[110] = uString::Const("TitleFont");
    ::STRINGS[111] = uString::Const("dataSource");
    ::STRINGS[112] = uString::Const("LOGGA IN");
    ::STRINGS[113] = uString::Const("STJ\303\204RNMARKERADE UTST\303\204LLARE");
    ::STRINGS[114] = uString::Const("F\303\226REL\303\204SNING");
    ::STRINGS[115] = uString::Const("14.00 SEKTION 4 SAL 3");
    ::STRINGS[116] = uString::Const("NYHETER");
    ::STRINGS[117] = uString::Const("PARTNERS");
    ::STRINGS[118] = uString::Const("UTST\303\204LLARE");
    ::STRINGS[119] = uString::Const("PROGRAM");
    ::STRINGS[120] = uString::Const("ICE BREAKER");
    ::STRINGS[121] = uString::Const("SPONSORER");
    ::STRINGS[122] = uString::Const("KARTA");
    ::STRINGS[123] = uString::Const("OM OSS");
    ::STRINGS[124] = uString::Const("Pages/News/NewsPage.ux");
    ::STRINGS[125] = uString::Const("\n"
        "  var Observable = require(\"FuseJS/Observable\");\n"
        "      var data = Observable();\n"
        "\n"
        "      function Article(item) {\n"
        "          this.title = item.title;\n"
        "      };\n"
        "\n"
        "      fetch(\"https://dev.jexpo.se/dev/forms/news?getAttributes=1\")\n"
        "      .then(function(response) { return response.json(); })\n"
        "      .then(function(responseObject) {\n"
        "          var items = [];\n"
        "          responseObject.results.forEach(function(r) {\n"
        "              items.push(new Article(r));\n"
        "          });\n"
        "          data.replaceAll(items);\n"
        "          debug_log(\"data: \" + JSON.stringify(data));\n"
        "      }).catch(function(e) {\n"
        "          console.log(\"Error: \" + e.message);\n"
        "      });\n"
        "\n"
        "      module.exports = {\n"
        "          dataSource: data\n"
        "      };\n"
        "\n"
        "  ");
    ::STRINGS[126] = uString::Const("Pages/Partners/PartnersPage.ux");
    ::STRINGS[127] = uString::Const("Handelsbanken");
    ::STRINGS[128] = uString::Const("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque consectetur enim nisl, tempor mollis dui finibus quis.");
    ::STRINGS[129] = uString::Const("L\303\204S MER");
    ::STRINGS[130] = uString::Const("www.handelsbanken.se");
    ::STRINGS[131] = uString::Const("Pages/Exhibitor/ExhibitorPage.ux");
    ::STRINGS[132] = uString::Const("S\303\266k utst\303\244llare");
    ::STRINGS[133] = uString::Const("A");
    ::STRINGS[134] = uString::Const("UTST\303\204LLARNAMN");
    ::STRINGS[135] = uString::Const("Pages/Program/ProgramPage.ux");
    ::STRINGS[136] = uString::Const("ONSDAG 8/11");
    ::STRINGS[137] = uString::Const("Pages/IceBreakers/IceBreakersPage.ux");
    ::STRINGS[138] = uString::Const("SHAKE TO BREAK");
    ::STRINGS[139] = uString::Const("Skaka telefonen f\303\266r att f\303\245 tips p\303\245 ice breakers");
    ::STRINGS[140] = uString::Const("Pages/Sponsors/SponsorsPage.ux");
    ::STRINGS[141] = uString::Const("GOODIEBAG");
    ::STRINGS[142] = uString::Const("Tack!");
    ::STRINGS[143] = uString::Const("Goodiebag");
    ::STRINGS[144] = uString::Const("Pages/Map/MapPage.ux");
    ::STRINGS[145] = uString::Const("PLAN 3");
    ::STRINGS[146] = uString::Const("PLAN 4");
    ::STRINGS[147] = uString::Const("Pages/AboutUs/AboutUsPage.ux");
    ::STRINGS[148] = uString::Const("TEMA 2017");
    ::STRINGS[149] = uString::Const("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed tristique mauris nec ornare consequat. Pellentesque vitae magna eget lacus facilisis ultricies. Fusce nec feugiat nibh, in tincidunt nulla.");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(11,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, aboutus), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, exhibitor), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, goodiebag), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, GoodiebagTab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, icebreaker), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, indicator), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::MainView, indicator_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, indicatorSponsor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::MainView, indicatorSponsor_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, map), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigation_Active_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigationControl), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigationControl_Active_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigationSponsors), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigationSponsors_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, news), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, partners), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, plan3), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, plan3Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, plan4), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, plan4Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, program), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MainView, router), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(::g::MainView, shadow), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, shadow_Color_inst), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(::g::MainView, shadowProfile), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, sidebar), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, sidebarFade), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, sidebarFade_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, sidebarProfile), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, sponsor), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, sponsors), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, SponsorTab), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp_Items_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector26_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector27_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector28_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector29_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector30_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector31_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Raleway_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::RalewayBlack_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::TitleFont_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 83;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :213
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :217
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :213
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;
::g::Uno::UX::Selector MainView::__selector16_;
::g::Uno::UX::Selector MainView::__selector17_;
::g::Uno::UX::Selector MainView::__selector18_;
::g::Uno::UX::Selector MainView::__selector19_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector20_;
::g::Uno::UX::Selector MainView::__selector21_;
::g::Uno::UX::Selector MainView::__selector22_;
::g::Uno::UX::Selector MainView::__selector23_;
::g::Uno::UX::Selector MainView::__selector24_;
::g::Uno::UX::Selector MainView::__selector25_;
::g::Uno::UX::Selector MainView::__selector26_;
::g::Uno::UX::Selector MainView::__selector27_;
::g::Uno::UX::Selector MainView::__selector28_;
::g::Uno::UX::Selector MainView::__selector29_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector30_;
::g::Uno::UX::Selector MainView::__selector31_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;
uSStrong< ::g::Fuse::Font*> MainView::Raleway_;
uSStrong< ::g::Fuse::Font*> MainView::RalewayBlack_;
uSStrong< ::g::Fuse::Font*> MainView::TitleFont_;

// public MainView() [instance] :213
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :217
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp1 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp2 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp3 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp4 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp5 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp6 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp7 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp8 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp9 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp10 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp11 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp12 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp13 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp14 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp15 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp16 = ::g::FuseJS::UserEvents::New2();
    shadow = ::g::Fuse::Controls::Shadow::New2();
    shadow_Color_inst = ::g::gadden_FuseControlsShadow_Color_Property::New1(shadow, MainView::__selector0());
    sidebarFade = ::g::Fuse::Controls::Rectangle::New3();
    sidebarFade_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(sidebarFade, MainView::__selector1());
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigation, MainView::__selector2());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[111/*"dataSource"*/]);
    navigationSponsors = ::g::Fuse::Controls::PageControl::New4();
    navigationSponsors_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationSponsors, MainView::__selector2());
    indicatorSponsor = ::g::Fuse::Controls::Rectangle::New3();
    indicatorSponsor_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicatorSponsor, MainView::__selector4());
    navigationControl = ::g::Fuse::Controls::PageControl::New4();
    navigationControl_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationControl, MainView::__selector2());
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicator, MainView::__selector4());
    ::g::Fuse::iOS::StatusBarConfig* temp18 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Controls::EdgeNavigator* temp19 = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebarProfile = ::g::Fuse::Controls::Panel::New3();
    shadowProfile = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp20 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], shadow_Color_inst);
    ::g::Fuse::Animations::Change* temp22 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], sidebarFade_Opacity_inst);
    ::g::Fuse::Controls::StackPanel* temp23 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp25 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp26 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Rectangle* temp27 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Title* temp28 = ::g::Title::New4();
    ::g::Fuse::Controls::Grid* temp29 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp30 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp31 = ::g::Fuse::Controls::Grid::New4();
    ::g::Paragraph* temp32 = ::g::Paragraph::New4();
    ::g::Paragraph* temp33 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Rectangle* temp34 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp35 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp36 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    sidebar = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp37 = ::g::Fuse::Controls::Image::New3();
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::StackPanel* temp38 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp39 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp40 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp41 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp42 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp43 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp44 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp45 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp46 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp47 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp48 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp49 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp50 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp51 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp52 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp53 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp54 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp55 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp56 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp57 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp58 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp59 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp60 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp61 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp62 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp63 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp64 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp65 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp66 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp67 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp68 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp69 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp70 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp71 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp72 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Rectangle* temp73 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp74 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp75 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp76 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp77 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp78 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp79 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::EdgeNavigator* temp80 = ::g::Fuse::Controls::EdgeNavigator::New4();
    ::g::Fuse::Controls::DockPanel* temp81 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp82 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp83 = ::g::Fuse::Controls::Panel::New3();
    ::g::Hamburger* temp84 = ::g::Hamburger::New5();
    ::g::Fuse::Gestures::Clicked* temp85 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp86 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Profile* temp87 = ::g::Profile::New5();
    ::g::Fuse::Gestures::Clicked* temp88 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp89 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Controls::Image* temp90 = ::g::Fuse::Controls::Image::New3();
    news = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp91 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp92 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::JavaScript* temp93 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp94 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template* temp95 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp96 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp17, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp97 = ::g::Fuse::Controls::Image::New3();
    partners = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp98 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp99 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp100 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp101 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp102 = ::g::Fuse::Controls::Image::New3();
    ::g::TitleBig* temp103 = ::g::TitleBig::New4();
    ::g::Paragraph* temp104 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Rectangle* temp105 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp106 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp107 = ::g::Paragraph::New4();
    ::g::Paragraph* temp108 = ::g::Paragraph::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp109 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    exhibitor = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp110 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp111 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp112 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::TextInput* temp113 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Image* temp114 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp115 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp116 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::StackPanel* temp117 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Paragraph* temp118 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Rectangle* temp119 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp120 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp121 = ::g::Fuse::Controls::Grid::New4();
    ::g::Paragraph* temp122 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Image* temp123 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp124 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp125 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp126 = ::g::Fuse::Controls::Grid::New4();
    ::g::Paragraph* temp127 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Image* temp128 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp129 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp130 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp131 = ::g::Fuse::Controls::Grid::New4();
    ::g::Paragraph* temp132 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Image* temp133 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp134 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp135 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp136 = ::g::Fuse::Controls::Grid::New4();
    ::g::Paragraph* temp137 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Image* temp138 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp139 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp140 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp141 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp142 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp143 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    program = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp144 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp145 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp146 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleBig* temp147 = ::g::TitleBig::New4();
    ::g::Fuse::Controls::Grid* temp148 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp149 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp150 = ::g::Fuse::Controls::Grid::New4();
    ::g::Paragraph* temp151 = ::g::Paragraph::New4();
    ::g::Paragraph* temp152 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Rectangle* temp153 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp154 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp155 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp156 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp157 = ::g::Fuse::Controls::Grid::New4();
    ::g::Paragraph* temp158 = ::g::Paragraph::New4();
    ::g::Paragraph* temp159 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Rectangle* temp160 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp161 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp162 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp163 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp164 = ::g::Fuse::Controls::Grid::New4();
    ::g::Paragraph* temp165 = ::g::Paragraph::New4();
    ::g::Paragraph* temp166 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Rectangle* temp167 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp168 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp169 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp170 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp171 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    icebreaker = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp172 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp173 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp174 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp175 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::StackPanel* temp176 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::TextView* temp177 = ::g::Fuse::Controls::TextView::New3();
    ::g::Paragraph* temp178 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Image* temp179 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp180 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    sponsors = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp181 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp182 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Triggers::LayoutAnimation* temp183 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp184 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp185 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp186 = ::g::Fuse::Controls::Grid::New4();
    SponsorTab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp187 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp188 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp189 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationSponsors_Active_inst);
    GoodiebagTab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp190 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp191 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp192 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationSponsors_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp193 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    sponsor = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp194 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp195 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorSponsor_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Panel* temp196 = ::g::Fuse::Controls::Panel::New3();
    ::g::TitleBig* temp197 = ::g::TitleBig::New4();
    ::g::Fuse::Controls::Rectangle* temp198 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp199 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp200 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    goodiebag = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp201 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp202 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorSponsor_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Text* temp203 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp204 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp205 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    map = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp206 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp207 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Triggers::LayoutAnimation* temp208 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp209 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp210 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp211 = ::g::Fuse::Controls::Grid::New4();
    plan3Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp212 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp213 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp214 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControl_Active_inst);
    plan4Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp215 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp216 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp217 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControl_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp218 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    plan3 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp219 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp220 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Image* temp221 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp222 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    plan4 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp223 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp224 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Image* temp225 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp226 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    aboutus = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp227 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp228 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp229 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp230 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::ClientPanel* temp231 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Panel* temp232 = ::g::Fuse::Controls::Panel::New3();
    ::g::TitleBig* temp233 = ::g::TitleBig::New4();
    ::g::Fuse::Controls::Rectangle* temp234 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp235 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Paragraph* temp236 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Image* temp237 = ::g::Fuse::Controls::Image::New3();
    temp18->Style(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebarProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    uPtr(sidebarProfile)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebarProfile)->Margin(::g::Uno::Float4__New2(56.0f, 0.0f, 0.0f, 0.0f));
    uPtr(sidebarProfile)->Name(MainView::__selector5());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebarProfile, 1);
    uPtr(sidebarProfile)->Background(temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebarProfile)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), shadowProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebarProfile)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebarProfile)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    uPtr(shadowProfile)->Angle(180.0f);
    uPtr(shadowProfile)->Distance(8.0f);
    uPtr(shadowProfile)->Size(16.0f);
    uPtr(shadowProfile)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadowProfile)->Name(MainView::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp22, uCRef(1.0f));
    temp23->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp24->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp24->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp24->Alignment(6);
    temp24->Margin(::g::Uno::Float4__New2(0.0f, 80.0f, 0.0f, 0.0f));
    temp24->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Strokes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp25->Color(::g::Fuse::Drawing::Colors::White());
    temp25->Width(1.0f);
    temp26->Value(::STRINGS[112/*"LOGGA IN"*/]);
    temp26->FontSize(18.0f);
    temp26->Alignment(10);
    temp27->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp27->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp27->Alignment(10);
    temp27->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp27->SnapToPixels(true);
    temp27->Fill(::g::Fuse::Drawing::Brushes::White());
    temp28->Value(::STRINGS[113/*"STJÄRNMARKE...*/]);
    temp28->Alignment(10);
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp29->RowCount(1);
    temp29->ColumnCount(2);
    temp29->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp29->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp30->StretchMode(6);
    temp30->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp30->Alignment(13);
    temp30->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImagea23648e5()));
    temp31->RowCount(2);
    temp31->ColumnCount(1);
    temp31->Alignment(13);
    temp31->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    temp32->Value(::STRINGS[114/*"FÖRELÄSNING"*/]);
    temp32->TextWrapping(1);
    temp32->Font(MainView::RalewayBlack());
    temp33->Value(::STRINGS[115/*"14.00 SEKTI...*/]);
    temp33->FontSize(10.0f);
    temp34->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp34->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp34->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp34->SnapToPixels(true);
    temp34->Fill(temp35);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 56.0f, 0.0f));
    uPtr(sidebar)->Name(MainView::__selector7());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 0);
    uPtr(sidebar)->Background(temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    uPtr(shadow)->Angle(180.0f);
    uPtr(shadow)->Distance(8.0f);
    uPtr(shadow)->Size(16.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(MainView::__selector8());
    temp37->StretchMode(3);
    temp37->Layer(1);
    temp37->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MenuBackgrounde8390c5c()));
    uPtr(router)->Name(MainView::__selector9());
    temp38->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    temp39->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 40.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp40->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp40->Alignment(7);
    temp40->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhiteb60c79a6()));
    temp41->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp42->Text(::STRINGS[116/*"NYHETER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp44);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp44, news);
    temp45->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp46->Text(::STRINGS[117/*"PARTNERS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp48);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp48, partners);
    temp49->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp50->Text(::STRINGS[118/*"UTSTÄLLARE"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp52);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp52, exhibitor);
    temp53->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp54->Text(::STRINGS[119/*"PROGRAM"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp56);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp56, program);
    temp57->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    temp58->Text(::STRINGS[120/*"ICE BREAKER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp60);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp60, icebreaker);
    temp61->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    temp62->Text(::STRINGS[121/*"SPONSORER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp64);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp64, sponsors);
    temp65->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    temp66->Text(::STRINGS[122/*"KARTA"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp68);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp68, map);
    temp69->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    temp70->Text(::STRINGS[123/*"OM OSS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp72);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp72, aboutus);
    temp73->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp73->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp73->Alignment(3);
    temp73->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 20.0f, 0.0f));
    temp73->SnapToPixels(true);
    temp73->Fill(temp74);
    temp75->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp75->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 20.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    temp76->Width(::g::Uno::UX::Size__New1(30.0f, 4));
    temp76->Alignment(7);
    temp76->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HandelsbankenLogotypeWhite5003c429()));
    temp77->Width(::g::Uno::UX::Size__New1(10.0f, 4));
    temp77->Alignment(11);
    temp77->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ErnstYoungLogotypeWhiteb47162ad()));
    temp78->Width(::g::Uno::UX::Size__New1(30.0f, 4));
    temp78->Alignment(15);
    temp78->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HHGSLogotypWhitee61188a4()));
    temp81->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    temp82->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp82, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    temp83->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    temp84->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp86);
    temp86->Target(sidebar);
    uPtr(sidebarFade)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3333333f));
    uPtr(sidebarFade)->HitTestMode(0);
    uPtr(sidebarFade)->Opacity(0.0f);
    uPtr(sidebarFade)->Layer(3);
    uPtr(sidebarFade)->Name(MainView::__selector10());
    temp87->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp89);
    temp89->Target(sidebarProfile);
    temp90->Width(::g::Uno::UX::Size__New1(20.0f, 4));
    temp90->Alignment(10);
    temp90->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeSmallWhitefb834b4b()));
    uPtr(navigation)->Name(MainView::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), news);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), partners);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), exhibitor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), program);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), icebreaker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), sponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), map);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), aboutus);
    uPtr(news)->Name(MainView::__selector12());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(news)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp97);
    temp92->LineNumber(2);
    temp92->FileName(::STRINGS[124/*"Pages/News/...*/]);
    temp92->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsPage6c8b9894()));
    temp93->Code(::STRINGS[125/*"\n  var Obs...*/]);
    temp93->LineNumber(4);
    temp93->FileName(::STRINGS[124/*"Pages/News/...*/]);
    temp94->ItemSpacing(16.0f);
    temp94->Margin(::g::Uno::Float4__New2(16.0f, 16.0f, 16.0f, 16.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp96);
    temp97->StretchMode(6);
    temp97->Alignment(10);
    temp97->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundAbstractPaintb7a7b0b1()));
    uPtr(partners)->Name(MainView::__selector13());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(partners)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    temp99->LineNumber(2);
    temp99->FileName(::STRINGS[126/*"Pages/Partn...*/]);
    temp99->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::PartnersPage3c24808c()));
    temp100->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp100->Background(temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    temp101->StretchMode(6);
    temp101->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp101->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    temp101->Alignment(4);
    temp101->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImage2dc48e6a7()));
    temp102->StretchMode(6);
    temp102->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    temp102->Alignment(5);
    temp102->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 20.0f));
    temp102->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HandelsbankenLogotypeWhite5003c429()));
    temp103->Value(::STRINGS[127/*"Handelsbanken"*/]);
    temp103->Alignment(5);
    temp103->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 20.0f));
    temp104->Value(::STRINGS[128/*"Lorem ipsum...*/]);
    temp104->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 20.0f, 20.0f));
    temp105->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    temp105->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp105->Alignment(5);
    temp105->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp105->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Strokes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp107);
    temp106->Color(::g::Fuse::Drawing::Colors::White());
    temp106->Width(1.0f);
    temp107->Value(::STRINGS[129/*"LÄS MER"*/]);
    temp107->Alignment(10);
    temp108->Value(::STRINGS[130/*"www.handels...*/]);
    temp108->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    uPtr(exhibitor)->Name(MainView::__selector14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(exhibitor)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    temp111->LineNumber(2);
    temp111->FileName(::STRINGS[131/*"Pages/Exhib...*/]);
    temp111->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ExhibitorPage088081d4()));
    temp112->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp117);
    temp113->PlaceholderText(::STRINGS[132/*"Sök utställ...*/]);
    temp113->PlaceholderColor(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp113->TextAlignment(1);
    temp113->TextColor(::g::Fuse::Drawing::Colors::White());
    temp113->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp113->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp113->Alignment(6);
    temp113->Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    temp114->StretchMode(6);
    temp114->Height(::g::Uno::UX::Size__New1(13.0f, 1));
    temp114->Alignment(10);
    temp114->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 120.0f, 0.0f));
    temp114->Layer(1);
    temp114->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::SearchGreyfcbedeec()));
    temp115->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp115->Layer(1);
    temp115->Fill(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Strokes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp116);
    temp116->Color(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp116->Width(1.0f);
    temp117->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp117->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp119);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    temp118->Value(::STRINGS[133/*"A"*/]);
    temp118->Alignment(1);
    temp118->Font(MainView::RalewayBlack());
    temp119->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp119->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp119->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp119->SnapToPixels(true);
    temp119->Fill(temp120);
    temp121->RowCount(1);
    temp121->ColumnCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    temp122->Value(::STRINGS[134/*"UTSTÄLLARNAMN"*/]);
    temp123->StretchMode(6);
    temp123->Height(::g::Uno::UX::Size__New1(15.0f, 1));
    temp123->Alignment(7);
    temp123->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StarWhitec08d0b22()));
    temp124->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp124->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp124->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp124->SnapToPixels(true);
    temp124->Fill(temp125);
    temp126->RowCount(1);
    temp126->ColumnCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    temp127->Value(::STRINGS[134/*"UTSTÄLLARNAMN"*/]);
    temp128->StretchMode(6);
    temp128->Height(::g::Uno::UX::Size__New1(15.0f, 1));
    temp128->Alignment(7);
    temp128->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StarWhitec08d0b22()));
    temp129->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp129->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp129->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp129->SnapToPixels(true);
    temp129->Fill(temp130);
    temp131->RowCount(1);
    temp131->ColumnCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp133);
    temp132->Value(::STRINGS[134/*"UTSTÄLLARNAMN"*/]);
    temp133->StretchMode(6);
    temp133->Height(::g::Uno::UX::Size__New1(15.0f, 1));
    temp133->Alignment(7);
    temp133->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StarWhitec08d0b22()));
    temp134->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp134->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp134->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp134->SnapToPixels(true);
    temp134->Fill(temp135);
    temp136->RowCount(1);
    temp136->ColumnCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    temp137->Value(::STRINGS[134/*"UTSTÄLLARNAMN"*/]);
    temp138->StretchMode(6);
    temp138->Height(::g::Uno::UX::Size__New1(15.0f, 1));
    temp138->Alignment(7);
    temp138->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StarWhitec08d0b22()));
    temp139->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp139->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp139->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp139->SnapToPixels(true);
    temp139->Fill(temp140);
    temp141->Background(temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    temp142->StretchMode(3);
    temp142->Layer(1);
    temp142->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundExhibitor7b75354d()));
    uPtr(program)->Name(MainView::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(program)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp169);
    temp145->LineNumber(2);
    temp145->FileName(::STRINGS[135/*"Pages/Progr...*/]);
    temp145->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ProgramPageb7c11174()));
    temp146->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp153);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp160);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp162);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp167);
    temp147->Value(::STRINGS[136/*"ONSDAG 8/11"*/]);
    temp147->Color(::g::Fuse::Drawing::Colors::Black());
    temp147->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 20.0f));
    temp148->RowCount(1);
    temp148->ColumnCount(2);
    temp148->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp148->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp149);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    temp149->StretchMode(6);
    temp149->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp149->Alignment(13);
    temp149->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImagea23648e5()));
    temp150->RowCount(2);
    temp150->ColumnCount(1);
    temp150->Alignment(13);
    temp150->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp151);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp152);
    temp151->Value(::STRINGS[114/*"FÖRELÄSNING"*/]);
    temp151->TextWrapping(1);
    temp151->Font(MainView::RalewayBlack());
    temp152->Value(::STRINGS[115/*"14.00 SEKTI...*/]);
    temp152->FontSize(10.0f);
    temp153->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp153->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp153->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp153->SnapToPixels(true);
    temp153->Fill(temp154);
    temp155->RowCount(1);
    temp155->ColumnCount(2);
    temp155->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp155->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp157);
    temp156->StretchMode(6);
    temp156->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp156->Alignment(13);
    temp156->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImagea23648e5()));
    temp157->RowCount(2);
    temp157->ColumnCount(1);
    temp157->Alignment(13);
    temp157->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp159);
    temp158->Value(::STRINGS[114/*"FÖRELÄSNING"*/]);
    temp158->TextWrapping(1);
    temp158->Font(MainView::RalewayBlack());
    temp159->Value(::STRINGS[115/*"14.00 SEKTI...*/]);
    temp159->FontSize(10.0f);
    temp160->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp160->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp160->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp160->SnapToPixels(true);
    temp160->Fill(temp161);
    temp162->RowCount(1);
    temp162->ColumnCount(2);
    temp162->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp162->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp164);
    temp163->StretchMode(6);
    temp163->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp163->Alignment(13);
    temp163->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImagea23648e5()));
    temp164->RowCount(2);
    temp164->ColumnCount(1);
    temp164->Alignment(13);
    temp164->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp166);
    temp165->Value(::STRINGS[114/*"FÖRELÄSNING"*/]);
    temp165->TextWrapping(1);
    temp165->Font(MainView::RalewayBlack());
    temp166->Value(::STRINGS[115/*"14.00 SEKTI...*/]);
    temp166->FontSize(10.0f);
    temp167->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp167->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp167->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp167->SnapToPixels(true);
    temp167->Fill(temp168);
    temp169->Background(temp171);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp169->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp170);
    temp170->StretchMode(3);
    temp170->Layer(1);
    temp170->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundProgram03638953()));
    uPtr(icebreaker)->Name(MainView::__selector16());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(icebreaker)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp172);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp173);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp174);
    temp173->LineNumber(2);
    temp173->FileName(::STRINGS[137/*"Pages/IceBr...*/]);
    temp173->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::IceBreakersPage164f8934()));
    temp174->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp174->Background(temp180);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp175);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp176);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp179);
    temp175->Alignment(6);
    temp175->Layer(1);
    temp175->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundIceBreaker6c14bba6()));
    temp176->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp176->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp177);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp176->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp178);
    temp177->Value(::STRINGS[138/*"SHAKE TO BR...*/]);
    temp177->TextWrapping(1);
    temp177->LineSpacing(20.0f);
    temp177->FontSize(65.0f);
    temp177->TextAlignment(1);
    temp177->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp177->Alignment(4);
    temp177->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    temp177->Font(MainView::TitleFont());
    temp178->Value(::STRINGS[139/*"Skaka telef...*/]);
    temp178->TextAlignment(1);
    temp178->Alignment(14);
    temp179->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    temp179->Alignment(14);
    temp179->Layer(1);
    temp179->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::IceBreakerIcon1c5db63d()));
    uPtr(sponsors)->Name(MainView::__selector17());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsors)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp181);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp181->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp182);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp181->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), indicatorSponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp181->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp185);
    temp182->LineNumber(2);
    temp182->FileName(::STRINGS[140/*"Pages/Spons...*/]);
    temp182->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::SponsorsPage206270b4()));
    uPtr(indicatorSponsor)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicatorSponsor)->Name(MainView::__selector18());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicatorSponsor, SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicatorSponsor)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp183);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp184);
    temp184->X(1.0f);
    temp184->Duration(0.4);
    temp184->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp184->Easing(::g::Fuse::Animations::Easing::BackIn());
    temp185->Background(temp205);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp185->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp186);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp185->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationSponsors);
    temp186->ColumnCount(2);
    temp186->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp186, 2);
    temp186->Background(temp193);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), GoodiebagTab);
    uPtr(SponsorTab)->Name(MainView::__selector19());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(SponsorTab)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp187);
    temp187->Text(::STRINGS[121/*"SPONSORER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp187->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp188);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp189);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp189, sponsor);
    uPtr(GoodiebagTab)->Name(MainView::__selector20());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(GoodiebagTab)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp190);
    temp190->Text(::STRINGS[141/*"GOODIEBAG"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp190->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp191);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp191->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp192);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp192, goodiebag);
    uPtr(navigationSponsors)->Name(MainView::__selector21());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationSponsors)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), sponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationSponsors)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), goodiebag);
    uPtr(sponsor)->Name(MainView::__selector22());
    uPtr(sponsor)->Background(temp200);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsor)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp194);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsor)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp196);
    temp194->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp195);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp195, SponsorTab);
    temp196->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp196->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp197);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp196->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp198);
    temp197->Value(::STRINGS[142/*"Tack!"*/]);
    temp198->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp198->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp198->Alignment(6);
    temp198->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp198->SnapToPixels(true);
    temp198->Fill(temp199);
    uPtr(goodiebag)->Name(MainView::__selector23());
    uPtr(goodiebag)->Background(temp204);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(goodiebag)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp201);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(goodiebag)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp203);
    temp201->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp202);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp202, GoodiebagTab);
    temp203->Value(::STRINGS[143/*"Goodiebag"*/]);
    uPtr(map)->Name(MainView::__selector24());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(map)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp206);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp207);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp210);
    temp207->LineNumber(2);
    temp207->FileName(::STRINGS[144/*"Pages/Map/M...*/]);
    temp207->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPage587221b4()));
    uPtr(indicator)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicator)->Name(MainView::__selector25());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp208);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp208->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp209);
    temp209->X(1.0f);
    temp209->Duration(0.4);
    temp209->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp209->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp210->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp211);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp210->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationControl);
    temp211->ColumnCount(2);
    temp211->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp211, 2);
    temp211->Background(temp218);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp211->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp211->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), plan4Tab);
    uPtr(plan3Tab)->Name(MainView::__selector26());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3Tab)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp212);
    temp212->Text(::STRINGS[145/*"PLAN 3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp212->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp213);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp213->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp214);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp214, plan3);
    uPtr(plan4Tab)->Name(MainView::__selector27());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4Tab)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp215);
    temp215->Text(::STRINGS[146/*"PLAN 4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp216);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp216->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp217);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp217, plan4);
    uPtr(navigationControl)->Name(MainView::__selector28());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControl)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), plan3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControl)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), plan4);
    uPtr(plan3)->Name(MainView::__selector29());
    uPtr(plan3)->Background(temp222);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp219);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp221);
    temp219->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp219->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp220);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp220, plan3Tab);
    temp221->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp221->Alignment(10);
    temp221->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPlan359a5493d()));
    uPtr(plan4)->Name(MainView::__selector30());
    uPtr(plan4)->Background(temp226);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp223);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp225);
    temp223->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp223->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp224);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp224, plan4Tab);
    temp225->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp225->Alignment(10);
    temp225->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPlan459a53440()));
    uPtr(aboutus)->Name(MainView::__selector31());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(aboutus)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp227);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp227->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp228);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp227->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp229);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp227->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp231);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp227->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp237);
    temp228->LineNumber(2);
    temp228->FileName(::STRINGS[147/*"Pages/About...*/]);
    temp228->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::AboutUsPage8a70b474()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp229->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp230);
    temp230->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp230->Alignment(6);
    temp230->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp230->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhiteb60c79a6()));
    temp231->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp231->Height(::g::Uno::UX::Size__New1(75.0f, 4));
    temp231->Alignment(12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp231->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp232);
    temp232->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp232->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp233);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp232->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp234);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp232->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp236);
    temp233->Value(::STRINGS[148/*"TEMA 2017"*/]);
    temp234->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp234->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp234->Alignment(6);
    temp234->Margin(::g::Uno::Float4__New2(0.0f, 45.0f, 0.0f, 0.0f));
    temp234->Fill(temp235);
    temp236->Value(::STRINGS[149/*"Lorem ipsum...*/]);
    temp236->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp236->Height(::g::Uno::UX::Size__New1(280.0f, 1));
    temp236->Alignment(10);
    temp236->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp237->StretchMode(6);
    temp237->Alignment(10);
    temp237->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundAbstractPaintb7a7b0b1()));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), sidebarProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), shadowProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), news);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), partners);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), exhibitor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), program);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), icebreaker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), sponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), indicatorSponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), GoodiebagTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), navigationSponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), sponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), goodiebag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), map);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), plan4Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), navigationControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), plan3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), plan4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[11/*Uno.Collections.ICollection<object>*/]), aboutus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
}

// public MainView New() [static] :213
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
