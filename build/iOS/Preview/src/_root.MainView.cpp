// This file was generated based on '/Users/ericaglimsholt/Documents/Skola/Handels marketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_bundle.h>
#include <_root.gadden_FuseCont-862d1e68.h>
#include <_root.gadden_FuseElem-acec0a78.h>
#include <_root.gadden_FuseReac-3db2ace5.h>
#include <_root.gadden_FuseReac-9206ef3c.h>
#include <_root.gadden_FuseReac-968d479e.h>
#include <_root.Hamburger.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.Paragraph.h>
#include <_root.Tab.h>
#include <_root.TabText.h>
#include <_root.TitleBig.h>
#include <_root.WelcomeText.h>
#include <Fuse.Animations.Animator.h>
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
#include <Fuse.Controls.ScrollV-9171ed6c.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextView.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
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
#include <Fuse.Reactive.EventBinding.h>
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
#include <Fuse.Triggers.PulseTr-e6f97a32.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.Scrolled.h>
#include <Fuse.Triggers.ScrolledArgs.h>
#include <Fuse.Triggers.ScrolledWhere.h>
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
#include <Uno.Float4.h>
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
static uString* STRINGS[144];
static uType* TYPES[10];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :91
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[0/*"sidebar"*/], ::STRINGS[1/*"shadow"*/], ::STRINGS[2/*"router"*/], ::STRINGS[3/*"navigation"*/], ::STRINGS[4/*"news"*/], ::STRINGS[5/*"temp_eb0"*/], ::STRINGS[6/*"atEnd"*/], ::STRINGS[7/*"temp_eb1"*/], ::STRINGS[8/*"partners"*/], ::STRINGS[9/*"exhibitor"*/], ::STRINGS[10/*"program"*/], ::STRINGS[11/*"icebreaker"*/], ::STRINGS[12/*"sponsors"*/], ::STRINGS[13/*"indicatorSp...*/], ::STRINGS[14/*"SponsorTab"*/], ::STRINGS[15/*"GoodiebagTab"*/], ::STRINGS[16/*"navigationS...*/], ::STRINGS[17/*"sponsor"*/], ::STRINGS[18/*"goodiebag"*/], ::STRINGS[19/*"map"*/], ::STRINGS[20/*"indicator"*/], ::STRINGS[21/*"plan3Tab"*/], ::STRINGS[22/*"plan4Tab"*/], ::STRINGS[23/*"navigationC...*/], ::STRINGS[24/*"plan3"*/], ::STRINGS[25/*"plan4"*/], ::STRINGS[26/*"aboutus"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"Active"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"Items"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"Offset"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"Limit"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"Element.Lay...*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"sidebar"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"shadow"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"router"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"navigation"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"news"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"atEnd"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"partners"*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"exhibitor"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"program"*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"icebreaker"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"sponsors"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"indicatorSp...*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"SponsorTab"*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"GoodiebagTab"*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"navigationS...*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"sponsor"*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"goodiebag"*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"map"*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"indicator"*/]);
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"plan3Tab"*/]);
    MainView::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"plan4Tab"*/]);
    MainView::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"navigationC...*/]);
    MainView::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"plan3"*/]);
    MainView::__selector28_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"plan4"*/]);
    MainView::__selector29_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"aboutus"*/]);
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
    ::STRINGS[0] = uString::Const("sidebar");
    ::STRINGS[1] = uString::Const("shadow");
    ::STRINGS[2] = uString::Const("router");
    ::STRINGS[3] = uString::Const("navigation");
    ::STRINGS[4] = uString::Const("news");
    ::STRINGS[5] = uString::Const("temp_eb0");
    ::STRINGS[6] = uString::Const("atEnd");
    ::STRINGS[7] = uString::Const("temp_eb1");
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
    ::STRINGS[27] = uString::Const("Active");
    ::STRINGS[28] = uString::Const("Items");
    ::STRINGS[29] = uString::Const("Offset");
    ::STRINGS[30] = uString::Const("Limit");
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
    ::STRINGS[111] = uString::Const("decreaseOffset");
    ::STRINGS[112] = uString::Const("increaseOffset");
    ::STRINGS[113] = uString::Const("list");
    ::STRINGS[114] = uString::Const("offset");
    ::STRINGS[115] = uString::Const("limit");
    ::STRINGS[116] = uString::Const("NYHETER");
    ::STRINGS[117] = uString::Const("PARTNERS");
    ::STRINGS[118] = uString::Const("UTST\303\204LLARE");
    ::STRINGS[119] = uString::Const("PROGRAM");
    ::STRINGS[120] = uString::Const("ICE BREAKER");
    ::STRINGS[121] = uString::Const("SPONSORER");
    ::STRINGS[122] = uString::Const("KARTA");
    ::STRINGS[123] = uString::Const("OM OSS");
    ::STRINGS[124] = uString::Const("Pages/News/NewsPage.ux");
    ::STRINGS[125] = uString::Const("Pages/Partners/PartnersPage.ux");
    ::STRINGS[126] = uString::Const("Handelbanken");
    ::STRINGS[127] = uString::Const("Pages/Exhibitor/ExhibitorPage.ux");
    ::STRINGS[128] = uString::Const("V\303\244lkommen till utst\303\244llare");
    ::STRINGS[129] = uString::Const("Pages/Program/ProgramPage.ux");
    ::STRINGS[130] = uString::Const("V\303\244lkommen till program");
    ::STRINGS[131] = uString::Const("Pages/IceBreakers/IceBreakersPage.ux");
    ::STRINGS[132] = uString::Const("SHAKE TO BREAK");
    ::STRINGS[133] = uString::Const("Skaka telefonen f\303\266r att f\303\245 tips p\303\245 ice breakers");
    ::STRINGS[134] = uString::Const("Pages/Sponsors/SponsorsPage.ux");
    ::STRINGS[135] = uString::Const("GOODIEBAG");
    ::STRINGS[136] = uString::Const("Tack!");
    ::STRINGS[137] = uString::Const("Goodiebag");
    ::STRINGS[138] = uString::Const("Pages/Map/MapPage.ux");
    ::STRINGS[139] = uString::Const("PLAN 3");
    ::STRINGS[140] = uString::Const("PLAN 4");
    ::STRINGS[141] = uString::Const("Pages/AboutUs/AboutUsPage.ux");
    ::STRINGS[142] = uString::Const("TEMA 2017");
    ::STRINGS[143] = uString::Const("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed tristique mauris nec ornare consequat. Pellentesque vitae magna eget lacus facilisis ultricies. Fusce nec feugiat nibh, in tincidunt nulla.");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Fuse::Triggers::ScrolledArgs_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(11,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, aboutus), 0,
        ::g::Fuse::Triggers::Scrolled_typeof(), offsetof(::g::MainView, atEnd), 0,
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
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, sidebar), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, sponsor), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, sponsors), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, SponsorTab), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::MainView, temp_Limit_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::MainView, temp_Offset_inst), 0,
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
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Raleway_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::RalewayBlack_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::TitleFont_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Raleway", 78),
        new uField("RalewayBlack", 79),
        new uField("TitleFont", 80));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 81;
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

// public MainView() :200
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :204
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :200
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
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;
uSStrong< ::g::Fuse::Font*> MainView::Raleway_;
uSStrong< ::g::Fuse::Font*> MainView::RalewayBlack_;
uSStrong< ::g::Fuse::Font*> MainView::TitleFont_;

// public MainView() [instance] :200
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :204
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
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
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigation, MainView::__selector0());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[111/*"decreaseOff...*/]);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[112/*"increaseOff...*/]);
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp, MainView::__selector1());
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[113/*"list"*/]);
    temp_Offset_inst = ::g::gadden_FuseReactiveEach_Offset_Property::New1(temp, MainView::__selector2());
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[114/*"offset"*/]);
    temp_Limit_inst = ::g::gadden_FuseReactiveEach_Limit_Property::New1(temp, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[115/*"limit"*/]);
    navigationSponsors = ::g::Fuse::Controls::PageControl::New4();
    navigationSponsors_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationSponsors, MainView::__selector0());
    indicatorSponsor = ::g::Fuse::Controls::Rectangle::New3();
    indicatorSponsor_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicatorSponsor, MainView::__selector4());
    navigationControl = ::g::Fuse::Controls::PageControl::New4();
    navigationControl_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationControl, MainView::__selector0());
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicator, MainView::__selector4());
    ::g::Fuse::iOS::StatusBarConfig* temp22 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Controls::EdgeNavigator* temp23 = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebar = ::g::Fuse::Controls::Panel::New3();
    shadow = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Controls::Image* temp24 = ::g::Fuse::Controls::Image::New3();
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::StackPanel* temp25 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp26 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp27 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp28 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp29 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp30 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp31 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp32 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp33 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp34 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp35 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp36 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp37 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp38 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp39 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp40 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp41 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp42 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp43 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp44 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp45 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp46 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp47 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp48 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp49 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp50 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp51 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp52 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp53 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp54 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp55 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Panel* temp56 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp57 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp58 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp59 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Rectangle* temp60 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp61 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp62 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp63 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp64 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp65 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp66 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp67 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp68 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp69 = ::g::Fuse::Controls::Panel::New3();
    ::g::Hamburger* temp70 = ::g::Hamburger::New5();
    ::g::Fuse::Gestures::Clicked* temp71 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp72 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Controls::Image* temp73 = ::g::Fuse::Controls::Image::New3();
    news = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp74 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp75 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp76 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp77 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::ClientPanel* temp78 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::ScrollView* temp79 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Triggers::Scrolled* temp80 = ::g::Fuse::Triggers::Scrolled::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp17, __g_nametable1);
    atEnd = ::g::Fuse::Triggers::Scrolled::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18, __g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp81 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template* temp82 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp83 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp19, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp84 = ::g::Fuse::Reactive::DataBinding::New1(temp_Offset_inst, (uObject*)temp20, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp85 = ::g::Fuse::Reactive::DataBinding::New1(temp_Limit_inst, (uObject*)temp21, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp86 = ::g::Fuse::Controls::Image::New3();
    partners = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp87 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp88 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp89 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp90 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp91 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp92 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp93 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp94 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp95 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::TitleBig* temp96 = ::g::TitleBig::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp97 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    exhibitor = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp98 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp99 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::WelcomeText* temp100 = ::g::WelcomeText::New4();
    program = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp101 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp102 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::WelcomeText* temp103 = ::g::WelcomeText::New4();
    icebreaker = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp104 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp105 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp106 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp107 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp108 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::TextView* temp109 = ::g::Fuse::Controls::TextView::New3();
    ::g::Paragraph* temp110 = ::g::Paragraph::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp111 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    sponsors = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp112 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp113 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Triggers::LayoutAnimation* temp114 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp115 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp116 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp117 = ::g::Fuse::Controls::Grid::New4();
    SponsorTab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp118 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp119 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp120 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationSponsors_Active_inst);
    GoodiebagTab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp121 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp122 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp123 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationSponsors_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp124 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    sponsor = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp125 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp126 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorSponsor_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Panel* temp127 = ::g::Fuse::Controls::Panel::New3();
    ::g::TitleBig* temp128 = ::g::TitleBig::New4();
    ::g::Fuse::Controls::Rectangle* temp129 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp130 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp131 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    goodiebag = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp132 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp133 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorSponsor_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Text* temp134 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp135 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp136 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    map = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp137 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp138 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Triggers::LayoutAnimation* temp139 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp140 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp141 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp142 = ::g::Fuse::Controls::Grid::New4();
    plan3Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp143 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp144 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp145 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControl_Active_inst);
    plan4Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp146 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp147 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp148 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControl_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp149 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    plan3 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp150 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp151 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Image* temp152 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp153 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    plan4 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp154 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp155 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Image* temp156 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp157 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    aboutus = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp158 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp159 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp160 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp161 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::ClientPanel* temp162 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Panel* temp163 = ::g::Fuse::Controls::Panel::New3();
    ::g::TitleBig* temp164 = ::g::TitleBig::New4();
    ::g::Fuse::Controls::Rectangle* temp165 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp166 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Paragraph* temp167 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Image* temp168 = ::g::Fuse::Controls::Image::New3();
    temp22->Style(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 56.0f, 0.0f));
    uPtr(sidebar)->Name(MainView::__selector5());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 0);
    uPtr(sidebar)->Background(temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    uPtr(shadow)->Angle(180.0f);
    uPtr(shadow)->Distance(8.0f);
    uPtr(shadow)->Size(16.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(MainView::__selector6());
    temp24->StretchMode(3);
    temp24->Layer(1);
    temp24->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MenuBackgrounde8390c5c()));
    uPtr(router)->Name(MainView::__selector7());
    temp25->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    temp26->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 40.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp27->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp27->Alignment(7);
    temp27->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhiteb60c79a6()));
    temp28->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp29->Text(::STRINGS[116/*"NYHETER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp31);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp31, news);
    temp32->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    temp33->Text(::STRINGS[117/*"PARTNERS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp35);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp35, partners);
    temp36->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp37->Text(::STRINGS[118/*"UTSTÄLLARE"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp39);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp39, exhibitor);
    temp40->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp41->Text(::STRINGS[119/*"PROGRAM"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp43);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp43, program);
    temp44->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    temp45->Text(::STRINGS[120/*"ICE BREAKER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp47);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp47, icebreaker);
    temp48->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    temp49->Text(::STRINGS[121/*"SPONSORER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp51);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp51, sponsors);
    temp52->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    temp53->Text(::STRINGS[122/*"KARTA"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp55);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp55, map);
    temp56->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    temp57->Text(::STRINGS[123/*"OM OSS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp59);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp59, aboutus);
    temp60->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp60->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp60->Alignment(3);
    temp60->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 20.0f, 0.0f));
    temp60->SnapToPixels(true);
    temp60->Fill(temp61);
    temp62->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp62->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 20.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    temp63->Width(::g::Uno::UX::Size__New1(30.0f, 4));
    temp63->Alignment(7);
    temp63->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HandelsbankenLogotypeWhite5003c429()));
    temp64->Width(::g::Uno::UX::Size__New1(10.0f, 4));
    temp64->Alignment(11);
    temp64->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ErnstYoungLogotypeWhiteb47162ad()));
    temp65->Width(::g::Uno::UX::Size__New1(30.0f, 4));
    temp65->Alignment(15);
    temp65->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HHGSLogotypWhitee61188a4()));
    temp67->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    temp68->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp68, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    temp69->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    temp70->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp72);
    temp72->Target(sidebar);
    temp73->Width(::g::Uno::UX::Size__New1(20.0f, 4));
    temp73->Alignment(10);
    temp73->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeSmallWhitefb834b4b()));
    uPtr(navigation)->Name(MainView::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), news);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), partners);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), exhibitor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), program);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), icebreaker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), sponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), map);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), aboutus);
    uPtr(news)->Name(MainView::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(news)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    temp75->LineNumber(2);
    temp75->FileName(::STRINGS[124/*"Pages/News/...*/]);
    temp75->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsPage6c8b9894()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    temp77->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp77->Alignment(6);
    temp77->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp77->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhiteb60c79a6()));
    temp78->Height(::g::Uno::UX::Size__New1(75.0f, 4));
    temp78->Alignment(12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp79);
    temp79->LayoutMode(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), atEnd);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    temp80->To(1);
    temp80->Within(104.0f);
    temp80->add_Handler(uDelegate::New(::TYPES[5/*Fuse.Triggers.PulseTrigger<Fuse.Triggers.ScrolledArgs>.PulseHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    uPtr(atEnd)->To(2);
    uPtr(atEnd)->Within(104.0f);
    uPtr(atEnd)->Name(MainView::__selector10());
    uPtr(atEnd)->add_Handler(uDelegate::New(::TYPES[5/*Fuse.Triggers.PulseTrigger<Fuse.Triggers.ScrolledArgs>.PulseHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(atEnd)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp81->ItemSpacing(0.0f);
    temp81->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp85);
    temp86->StretchMode(6);
    temp86->Alignment(10);
    temp86->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundAbstractPaintb7a7b0b1()));
    uPtr(partners)->Name(MainView::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(partners)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    temp88->LineNumber(2);
    temp88->FileName(::STRINGS[125/*"Pages/Partn...*/]);
    temp88->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::PartnersPage3c24808c()));
    temp89->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp89->Background(temp97);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp89->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    temp90->RowCount(6);
    temp90->ColumnCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp95);
    temp91->Height(::g::Uno::UX::Size__New1(300.0f, 1));
    ::g::Fuse::Controls::Grid::SetRow(temp91, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp91, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    temp92->StretchMode(6);
    temp92->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImage2dc48e6a7()));
    temp93->Color(::g::Fuse::Drawing::Colors::Blue());
    temp93->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp93->Alignment(4);
    ::g::Fuse::Controls::Grid::SetRow(temp93, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp93, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    temp94->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    temp94->Alignment(5);
    temp94->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    temp94->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HandelsbankenLogotypeWhite5003c429()));
    temp95->Color(::g::Fuse::Drawing::Colors::Red());
    temp95->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp95->Alignment(4);
    ::g::Fuse::Controls::Grid::SetRow(temp95, 3);
    ::g::Fuse::Controls::Grid::SetColumn(temp95, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    temp96->Value(::STRINGS[126/*"Handelbanken"*/]);
    temp96->Alignment(5);
    uPtr(exhibitor)->Name(MainView::__selector12());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(exhibitor)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    temp99->LineNumber(2);
    temp99->FileName(::STRINGS[127/*"Pages/Exhib...*/]);
    temp99->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ExhibitorPage088081d4()));
    temp100->Value(::STRINGS[128/*"Välkommen t...*/]);
    uPtr(program)->Name(MainView::__selector13());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(program)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    temp102->LineNumber(2);
    temp102->FileName(::STRINGS[129/*"Pages/Progr...*/]);
    temp102->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ProgramPageb7c11174()));
    temp103->Value(::STRINGS[130/*"Välkommen t...*/]);
    uPtr(icebreaker)->Name(MainView::__selector14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(icebreaker)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
    temp105->LineNumber(2);
    temp105->FileName(::STRINGS[131/*"Pages/IceBr...*/]);
    temp105->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::IceBreakersPage164f8934()));
    temp106->Background(temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    temp107->Alignment(6);
    temp107->Layer(1);
    temp107->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundIceBreaker6c14bba6()));
    temp108->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    temp109->Value(::STRINGS[132/*"SHAKE TO BR...*/]);
    temp109->TextWrapping(1);
    temp109->LineSpacing(20.0f);
    temp109->FontSize(65.0f);
    temp109->TextAlignment(1);
    temp109->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp109->Alignment(4);
    temp109->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    temp109->Font(MainView::TitleFont());
    temp110->Value(::STRINGS[133/*"Skaka telef...*/]);
    temp110->TextAlignment(1);
    temp110->Alignment(14);
    uPtr(sponsors)->Name(MainView::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsors)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), indicatorSponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp116);
    temp113->LineNumber(2);
    temp113->FileName(::STRINGS[134/*"Pages/Spons...*/]);
    temp113->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::SponsorsPage206270b4()));
    uPtr(indicatorSponsor)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicatorSponsor)->Name(MainView::__selector16());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicatorSponsor, SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicatorSponsor)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp115);
    temp115->X(1.0f);
    temp115->Duration(0.4);
    temp115->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp115->Easing(::g::Fuse::Animations::Easing::BackIn());
    temp116->Background(temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp117);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationSponsors);
    temp117->ColumnCount(2);
    temp117->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp117, 2);
    temp117->Background(temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), GoodiebagTab);
    uPtr(SponsorTab)->Name(MainView::__selector17());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(SponsorTab)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    temp118->Text(::STRINGS[121/*"SPONSORER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp118->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp119);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp119->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp120);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp120, sponsor);
    uPtr(GoodiebagTab)->Name(MainView::__selector18());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(GoodiebagTab)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp121);
    temp121->Text(::STRINGS[135/*"GOODIEBAG"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp122->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp123);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp123, goodiebag);
    uPtr(navigationSponsors)->Name(MainView::__selector19());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationSponsors)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), sponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationSponsors)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), goodiebag);
    uPtr(sponsor)->Name(MainView::__selector20());
    uPtr(sponsor)->Background(temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsor)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsor)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp127);
    temp125->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp126);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp126, SponsorTab);
    temp127->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp127->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp127->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    temp128->Value(::STRINGS[136/*"Tack!"*/]);
    temp129->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp129->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp129->Alignment(6);
    temp129->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp129->SnapToPixels(true);
    temp129->Fill(temp130);
    uPtr(goodiebag)->Name(MainView::__selector21());
    uPtr(goodiebag)->Background(temp135);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(goodiebag)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(goodiebag)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    temp132->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp132->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp133);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp133, GoodiebagTab);
    temp134->Value(::STRINGS[137/*"Goodiebag"*/]);
    uPtr(map)->Name(MainView::__selector22());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(map)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    temp138->LineNumber(2);
    temp138->FileName(::STRINGS[138/*"Pages/Map/M...*/]);
    temp138->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPage587221b4()));
    uPtr(indicator)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicator)->Name(MainView::__selector23());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp140);
    temp140->X(1.0f);
    temp140->Duration(0.4);
    temp140->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp140->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationControl);
    temp142->ColumnCount(2);
    temp142->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp142, 2);
    temp142->Background(temp149);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp142->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp142->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), plan4Tab);
    uPtr(plan3Tab)->Name(MainView::__selector24());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3Tab)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    temp143->Text(::STRINGS[139/*"PLAN 3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp145);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp145, plan3);
    uPtr(plan4Tab)->Name(MainView::__selector25());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4Tab)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    temp146->Text(::STRINGS[140/*"PLAN 4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp147->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp148);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp148, plan4);
    uPtr(navigationControl)->Name(MainView::__selector26());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControl)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), plan3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControl)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), plan4);
    uPtr(plan3)->Name(MainView::__selector27());
    uPtr(plan3)->Background(temp153);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp152);
    temp150->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp151);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp151, plan3Tab);
    temp152->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp152->Alignment(10);
    temp152->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPlan359a5493d()));
    uPtr(plan4)->Name(MainView::__selector28());
    uPtr(plan4)->Background(temp157);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp156);
    temp154->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp155);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp155, plan4Tab);
    temp156->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp156->Alignment(10);
    temp156->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPlan459a53440()));
    uPtr(aboutus)->Name(MainView::__selector29());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(aboutus)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp159);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp160);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp162);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp168);
    temp159->LineNumber(2);
    temp159->FileName(::STRINGS[141/*"Pages/About...*/]);
    temp159->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::AboutUsPage8a70b474()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp160->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp161);
    temp161->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp161->Alignment(6);
    temp161->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp161->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhiteb60c79a6()));
    temp162->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp162->Height(::g::Uno::UX::Size__New1(75.0f, 4));
    temp162->Alignment(12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    temp163->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp164);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp167);
    temp164->Value(::STRINGS[142/*"TEMA 2017"*/]);
    temp165->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp165->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp165->Alignment(6);
    temp165->Margin(::g::Uno::Float4__New2(0.0f, 45.0f, 0.0f, 0.0f));
    temp165->Fill(temp166);
    temp167->Value(::STRINGS[143/*"Lorem ipsum...*/]);
    temp167->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp167->Height(::g::Uno::UX::Size__New1(280.0f, 1));
    temp167->Alignment(10);
    temp167->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp168->StretchMode(6);
    temp168->Alignment(10);
    temp168->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundAbstractPaintb7a7b0b1()));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), news);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), atEnd);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), partners);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), exhibitor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), program);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), icebreaker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), sponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), indicatorSponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), GoodiebagTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), navigationSponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), sponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), goodiebag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), map);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), plan4Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), navigationControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), plan3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), plan4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), aboutus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
}

// public MainView New() [static] :200
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
