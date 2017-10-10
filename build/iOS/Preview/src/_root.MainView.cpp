// This file was generated based on build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AboutAboutUs.h>
#include <_root.gadden_bundle.h>
#include <_root.gadden_FuseControlsImage_Url_Property.h>
#include <_root.gadden_FuseControlsNavigationControl_Active_Property.h>
#include <_root.gadden_FuseControlsShadow_Color_Property.h>
#include <_root.gadden_FuseControlsShape_Color_Property.h>
#include <_root.gadden_FuseControlsTextControl_Value_Property.h>
#include <_root.gadden_FuseControlsTextInputControl_Value_Property.h>
#include <_root.gadden_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <_root.gadden_FuseElementsElement_Opacity_Property.h>
#include <_root.gadden_FuseElementsElement_Visibility_Property.h>
#include <_root.gadden_FuseReactiveEach_Items_Property.h>
#include <_root.gadden_FuseReactiveWith_Data_Property.h>
#include <_root.gadden_FuseTriggersActionsLaunchUri_Uri_Property.h>
#include <_root.Hamburger.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template10.h>
#include <_root.MainView.Template11.h>
#include <_root.MainView.Template12.h>
#include <_root.MainView.Template13.h>
#include <_root.MainView.Template2.h>
#include <_root.MainView.Template3.h>
#include <_root.MainView.Template4.h>
#include <_root.MainView.Template5.h>
#include <_root.MainView.Template6.h>
#include <_root.MainView.Template7.h>
#include <_root.MainView.Template8.h>
#include <_root.MainView.Template9.h>
#include <_root.Paragraph.h>
#include <_root.Profile.h>
#include <_root.SmallText.h>
#include <_root.Tab.h>
#include <_root.TabText.h>
#include <_root.Title.h>
#include <_root.TitleBig.h>
#include <_root.WelcomeText.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputActionHandler.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
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
#include <Fuse.Elements.Visibility.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.FuseJS.DiagnosticsImplModule.h>
#include <Fuse.Reactive.FuseJS.Email.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.Maps.h>
#include <Fuse.Reactive.FuseJS.Phone.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.ToUpper.h>
#include <Fuse.Reactive.With.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.Actions.LaunchUri.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
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
static uString* STRINGS[310];
static uType* TYPES[17];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :1147
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 111, ::STRINGS[0/*"TheSidebar"*/], ::STRINGS[1/*"sidebarProf...*/], ::STRINGS[2/*"shadowProfile"*/], ::STRINGS[3/*"NotInlogged"*/], ::STRINGS[4/*"temp_eb0"*/], ::STRINGS[5/*"sidebar"*/], ::STRINGS[6/*"shadow"*/], ::STRINGS[7/*"router"*/], ::STRINGS[8/*"temp_eb1"*/], ::STRINGS[9/*"temp_eb2"*/], ::STRINGS[10/*"temp_eb3"*/], ::STRINGS[11/*"temp_eb4"*/], ::STRINGS[12/*"temp_eb5"*/], ::STRINGS[13/*"temp_eb6"*/], ::STRINGS[14/*"temp_eb7"*/], ::STRINGS[15/*"temp_eb8"*/], ::STRINGS[16/*"sidebarFade"*/], ::STRINGS[17/*"GaddenLogo"*/], ::STRINGS[18/*"FilterButton"*/], ::STRINGS[19/*"FilterArrow"*/], ::STRINGS[20/*"PartnerTitle"*/], ::STRINGS[21/*"navigation"*/], ::STRINGS[22/*"news"*/], ::STRINGS[23/*"NewsFeed"*/], ::STRINGS[24/*"logoImage"*/], ::STRINGS[25/*"NewsDetails"*/], ::STRINGS[26/*"TitleTest"*/], ::STRINGS[27/*"temp_eb10"*/], ::STRINGS[28/*"LectureDeta...*/], ::STRINGS[29/*"BackgroundI...*/], ::STRINGS[30/*"partners"*/], ::STRINGS[31/*"exhibitor"*/], ::STRINGS[32/*"ExibitorList"*/], ::STRINGS[33/*"temp_eb11"*/], ::STRINGS[34/*"ExhibitorDe...*/], ::STRINGS[35/*"FilterPanel"*/], ::STRINGS[36/*"CircleEkonom"*/], ::STRINGS[37/*"CircleMiljo...*/], ::STRINGS[38/*"CircleJurist"*/], ::STRINGS[39/*"CircleLogos...*/], ::STRINGS[40/*"ActiveJurist"*/], ::STRINGS[41/*"ActiveEkonom"*/], ::STRINGS[42/*"ActiveMiljo...*/], ::STRINGS[43/*"ActiveLogos...*/], ::STRINGS[44/*"CircleSomma...*/], ::STRINGS[45/*"CircleUppsats"*/], ::STRINGS[46/*"CircleInter...*/], ::STRINGS[47/*"CircleHeltid"*/], ::STRINGS[48/*"CircleExtra...*/], ::STRINGS[49/*"ActiveSomma...*/], ::STRINGS[50/*"ActiveUppsats"*/], ::STRINGS[51/*"ActiveInter...*/], ::STRINGS[52/*"ActiveHeltid"*/], ::STRINGS[53/*"ActiveExtra...*/], ::STRINGS[54/*"CircleKandi...*/], ::STRINGS[55/*"CircleMaster"*/], ::STRINGS[56/*"ActiveKandi...*/], ::STRINGS[57/*"ActiveMaster"*/], ::STRINGS[58/*"CircleOnsdag"*/], ::STRINGS[59/*"CircleTorsdag"*/], ::STRINGS[60/*"ActiveOnsdag"*/], ::STRINGS[61/*"ActiveTorsdag"*/], ::STRINGS[62/*"ExhibitorBa...*/], ::STRINGS[63/*"FilterBackg...*/], 
        ::STRINGS[64/*"program"*/], ::STRINGS[65/*"ProgramFeed"*/], ::STRINGS[66/*"ProgramDeta...*/], ::STRINGS[67/*"icebreaker"*/], ::STRINGS[68/*"popupBackgr...*/], ::STRINGS[69/*"infoIcon"*/], ::STRINGS[70/*"crossIcon"*/], ::STRINGS[71/*"opacityToggle"*/], ::STRINGS[72/*"popupInfo"*/], ::STRINGS[73/*"ResultPanel"*/], ::STRINGS[74/*"DefaultPanel"*/], ::STRINGS[75/*"IceBreakerB...*/], ::STRINGS[76/*"temp_eb15"*/], ::STRINGS[77/*"ShowResult"*/], ::STRINGS[78/*"IceBreakerI...*/], ::STRINGS[79/*"sponsors"*/], ::STRINGS[80/*"indicatorSp...*/], ::STRINGS[81/*"SponsorTab"*/], ::STRINGS[82/*"GoodiebagTab"*/], ::STRINGS[83/*"navigationS...*/], ::STRINGS[84/*"sponsor"*/], ::STRINGS[85/*"goodiebag"*/], ::STRINGS[86/*"map"*/], ::STRINGS[87/*"indicator"*/], ::STRINGS[88/*"plan3Tab"*/], ::STRINGS[89/*"plan4Tab"*/], ::STRINGS[90/*"navigationC...*/], ::STRINGS[91/*"plan3"*/], ::STRINGS[92/*"infoIconMap"*/], ::STRINGS[93/*"crossIconMap"*/], ::STRINGS[94/*"MapToggle"*/], ::STRINGS[95/*"popupInfoMap"*/], ::STRINGS[96/*"plan4"*/], ::STRINGS[97/*"infoIconMap2"*/], ::STRINGS[98/*"crossIconMap2"*/], ::STRINGS[99/*"MapToggle2"*/], ::STRINGS[100/*"popupInfoMap2"*/], ::STRINGS[101/*"aboutus"*/], ::STRINGS[102/*"indicatorAb...*/], ::STRINGS[103/*"AboutUsTab"*/], ::STRINGS[104/*"ProjectTab"*/], ::STRINGS[105/*"navigationC...*/], ::STRINGS[106/*"about"*/], ::STRINGS[107/*"project"*/], ::STRINGS[108/*"login"*/], ::STRINGS[109/*"LoginPage"*/], ::STRINGS[110/*"temp_eb16"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[111/*"Color"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[112/*"Opacity"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[113/*"Active"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[114/*"Visibility"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[115/*"Items"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[116/*"Url"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[117/*"Value"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[118/*"Data"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[119/*"Uri"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[120/*"Element.Lay...*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"TheSidebar"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"sidebarProf...*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"shadowProfile"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"NotInlogged"*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"sidebar"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"shadow"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"router"*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"sidebarFade"*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"GaddenLogo"*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"FilterButton"*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"FilterArrow"*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"PartnerTitle"*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"navigation"*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"news"*/]);
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"NewsFeed"*/]);
    MainView::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"logoImage"*/]);
    MainView::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"NewsDetails"*/]);
    MainView::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"TitleTest"*/]);
    MainView::__selector28_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"LectureDeta...*/]);
    MainView::__selector29_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"BackgroundI...*/]);
    MainView::__selector30_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"partners"*/]);
    MainView::__selector31_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"exhibitor"*/]);
    MainView::__selector32_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"ExibitorList"*/]);
    MainView::__selector33_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[34/*"ExhibitorDe...*/]);
    MainView::__selector34_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[35/*"FilterPanel"*/]);
    MainView::__selector35_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[36/*"CircleEkonom"*/]);
    MainView::__selector36_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"CircleMiljo...*/]);
    MainView::__selector37_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[38/*"CircleJurist"*/]);
    MainView::__selector38_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[39/*"CircleLogos...*/]);
    MainView::__selector39_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"ActiveJurist"*/]);
    MainView::__selector40_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[41/*"ActiveEkonom"*/]);
    MainView::__selector41_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[42/*"ActiveMiljo...*/]);
    MainView::__selector42_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[43/*"ActiveLogos...*/]);
    MainView::__selector43_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[44/*"CircleSomma...*/]);
    MainView::__selector44_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[45/*"CircleUppsats"*/]);
    MainView::__selector45_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[46/*"CircleInter...*/]);
    MainView::__selector46_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[47/*"CircleHeltid"*/]);
    MainView::__selector47_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[48/*"CircleExtra...*/]);
    MainView::__selector48_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[49/*"ActiveSomma...*/]);
    MainView::__selector49_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[50/*"ActiveUppsats"*/]);
    MainView::__selector50_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[51/*"ActiveInter...*/]);
    MainView::__selector51_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[52/*"ActiveHeltid"*/]);
    MainView::__selector52_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[53/*"ActiveExtra...*/]);
    MainView::__selector53_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[54/*"CircleKandi...*/]);
    MainView::__selector54_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[55/*"CircleMaster"*/]);
    MainView::__selector55_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[56/*"ActiveKandi...*/]);
    MainView::__selector56_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[57/*"ActiveMaster"*/]);
    MainView::__selector57_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[58/*"CircleOnsdag"*/]);
    MainView::__selector58_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[59/*"CircleTorsdag"*/]);
    MainView::__selector59_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[60/*"ActiveOnsdag"*/]);
    MainView::__selector60_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[61/*"ActiveTorsdag"*/]);
    MainView::__selector61_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[62/*"ExhibitorBa...*/]);
    MainView::__selector62_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[63/*"FilterBackg...*/]);
    MainView::__selector63_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[64/*"program"*/]);
    MainView::__selector64_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[65/*"ProgramFeed"*/]);
    MainView::__selector65_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[66/*"ProgramDeta...*/]);
    MainView::__selector66_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[67/*"icebreaker"*/]);
    MainView::__selector67_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[68/*"popupBackgr...*/]);
    MainView::__selector68_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[69/*"infoIcon"*/]);
    MainView::__selector69_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[70/*"crossIcon"*/]);
    MainView::__selector70_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[71/*"opacityToggle"*/]);
    MainView::__selector71_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[72/*"popupInfo"*/]);
    MainView::__selector72_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[73/*"ResultPanel"*/]);
    MainView::__selector73_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[74/*"DefaultPanel"*/]);
    MainView::__selector74_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[75/*"IceBreakerB...*/]);
    MainView::__selector75_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[77/*"ShowResult"*/]);
    MainView::__selector76_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[78/*"IceBreakerI...*/]);
    MainView::__selector77_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[79/*"sponsors"*/]);
    MainView::__selector78_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[80/*"indicatorSp...*/]);
    MainView::__selector79_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[81/*"SponsorTab"*/]);
    MainView::__selector80_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[82/*"GoodiebagTab"*/]);
    MainView::__selector81_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[83/*"navigationS...*/]);
    MainView::__selector82_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[84/*"sponsor"*/]);
    MainView::__selector83_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[85/*"goodiebag"*/]);
    MainView::__selector84_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[86/*"map"*/]);
    MainView::__selector85_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[87/*"indicator"*/]);
    MainView::__selector86_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[88/*"plan3Tab"*/]);
    MainView::__selector87_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[89/*"plan4Tab"*/]);
    MainView::__selector88_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[90/*"navigationC...*/]);
    MainView::__selector89_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[91/*"plan3"*/]);
    MainView::__selector90_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[92/*"infoIconMap"*/]);
    MainView::__selector91_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[93/*"crossIconMap"*/]);
    MainView::__selector92_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[94/*"MapToggle"*/]);
    MainView::__selector93_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[95/*"popupInfoMap"*/]);
    MainView::__selector94_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[96/*"plan4"*/]);
    MainView::__selector95_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[97/*"infoIconMap2"*/]);
    MainView::__selector96_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[98/*"crossIconMap2"*/]);
    MainView::__selector97_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[99/*"MapToggle2"*/]);
    MainView::__selector98_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[100/*"popupInfoMap2"*/]);
    MainView::__selector99_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[101/*"aboutus"*/]);
    MainView::__selector100_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[102/*"indicatorAb...*/]);
    MainView::__selector101_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[103/*"AboutUsTab"*/]);
    MainView::__selector102_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[104/*"ProjectTab"*/]);
    MainView::__selector103_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[105/*"navigationC...*/]);
    MainView::__selector104_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[106/*"about"*/]);
    MainView::__selector105_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[107/*"project"*/]);
    MainView::__selector106_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[108/*"login"*/]);
    MainView::__selector107_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[109/*"LoginPage"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[121/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[122/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[123/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[124/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[125/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[126/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[127/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[128/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[129/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[130/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[131/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[132/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[133/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[134/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[135/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[136/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[137/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[138/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[139/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[140/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[141/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[142/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[143/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[144/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[145/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[146/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[147/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[148/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[149/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[150/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[151/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[152/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[152/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[153/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[153/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[154/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[154/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[155/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[155/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[156/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[156/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[157/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[157/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[158/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[158/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[159/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[159/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[160/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[160/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[161/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[161/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[162/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[162/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[163/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[163/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[164/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[164/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[165/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[165/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[166/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[166/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[167/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[167/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[168/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[168/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[169/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[170/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[171/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[172/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[173/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[174/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[175/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[176/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[177/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[177/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[178/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[179/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[180/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[180/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[181/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[182/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[183/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[183/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[184/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[185/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[186/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[187/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[188/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[189/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), ::STRINGS[190/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[191/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), ::STRINGS[192/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), ::STRINGS[193/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), ::STRINGS[194/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), ::STRINGS[195/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), ::STRINGS[196/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), ::STRINGS[197/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), ::STRINGS[198/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), ::STRINGS[199/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), ::STRINGS[200/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), ::STRINGS[201/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[202/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[203/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[204/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[205/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[206/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[207/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Raleway_, ::STRINGS[208/*"Raleway"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::RalewayBlack_, ::STRINGS[209/*"RalewayBlack"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::TitleFont_, ::STRINGS[210/*"TitleFont"*/]);
    MainView::Raleway_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::RalewayRegularf8b9cde9()));
    MainView::RalewayBlack_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::RalewayBlack7c65f2a8()));
    MainView::TitleFont_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::SugarPlumseb988f08()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Raleway_, ::STRINGS[208/*"Raleway"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::RalewayBlack_, ::STRINGS[209/*"RalewayBlack"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::TitleFont_, ::STRINGS[210/*"TitleFont"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TheSidebar");
    ::STRINGS[1] = uString::Const("sidebarProfile");
    ::STRINGS[2] = uString::Const("shadowProfile");
    ::STRINGS[3] = uString::Const("NotInlogged");
    ::STRINGS[4] = uString::Const("temp_eb0");
    ::STRINGS[5] = uString::Const("sidebar");
    ::STRINGS[6] = uString::Const("shadow");
    ::STRINGS[7] = uString::Const("router");
    ::STRINGS[8] = uString::Const("temp_eb1");
    ::STRINGS[9] = uString::Const("temp_eb2");
    ::STRINGS[10] = uString::Const("temp_eb3");
    ::STRINGS[11] = uString::Const("temp_eb4");
    ::STRINGS[12] = uString::Const("temp_eb5");
    ::STRINGS[13] = uString::Const("temp_eb6");
    ::STRINGS[14] = uString::Const("temp_eb7");
    ::STRINGS[15] = uString::Const("temp_eb8");
    ::STRINGS[16] = uString::Const("sidebarFade");
    ::STRINGS[17] = uString::Const("GaddenLogo");
    ::STRINGS[18] = uString::Const("FilterButton");
    ::STRINGS[19] = uString::Const("FilterArrow");
    ::STRINGS[20] = uString::Const("PartnerTitle");
    ::STRINGS[21] = uString::Const("navigation");
    ::STRINGS[22] = uString::Const("news");
    ::STRINGS[23] = uString::Const("NewsFeed");
    ::STRINGS[24] = uString::Const("logoImage");
    ::STRINGS[25] = uString::Const("NewsDetails");
    ::STRINGS[26] = uString::Const("TitleTest");
    ::STRINGS[27] = uString::Const("temp_eb10");
    ::STRINGS[28] = uString::Const("LectureDetails");
    ::STRINGS[29] = uString::Const("BackgroundImage");
    ::STRINGS[30] = uString::Const("partners");
    ::STRINGS[31] = uString::Const("exhibitor");
    ::STRINGS[32] = uString::Const("ExibitorList");
    ::STRINGS[33] = uString::Const("temp_eb11");
    ::STRINGS[34] = uString::Const("ExhibitorDetails");
    ::STRINGS[35] = uString::Const("FilterPanel");
    ::STRINGS[36] = uString::Const("CircleEkonom");
    ::STRINGS[37] = uString::Const("CircleMiljovetare");
    ::STRINGS[38] = uString::Const("CircleJurist");
    ::STRINGS[39] = uString::Const("CircleLogostiker");
    ::STRINGS[40] = uString::Const("ActiveJurist");
    ::STRINGS[41] = uString::Const("ActiveEkonom");
    ::STRINGS[42] = uString::Const("ActiveMiljovetare");
    ::STRINGS[43] = uString::Const("ActiveLogostiker");
    ::STRINGS[44] = uString::Const("CircleSommarjobb");
    ::STRINGS[45] = uString::Const("CircleUppsats");
    ::STRINGS[46] = uString::Const("CircleInternship");
    ::STRINGS[47] = uString::Const("CircleHeltid");
    ::STRINGS[48] = uString::Const("CircleExtrajobb");
    ::STRINGS[49] = uString::Const("ActiveSommarjobb");
    ::STRINGS[50] = uString::Const("ActiveUppsats");
    ::STRINGS[51] = uString::Const("ActiveInternship");
    ::STRINGS[52] = uString::Const("ActiveHeltid");
    ::STRINGS[53] = uString::Const("ActiveExtrajobb");
    ::STRINGS[54] = uString::Const("CircleKandidat");
    ::STRINGS[55] = uString::Const("CircleMaster");
    ::STRINGS[56] = uString::Const("ActiveKandidat");
    ::STRINGS[57] = uString::Const("ActiveMaster");
    ::STRINGS[58] = uString::Const("CircleOnsdag");
    ::STRINGS[59] = uString::Const("CircleTorsdag");
    ::STRINGS[60] = uString::Const("ActiveOnsdag");
    ::STRINGS[61] = uString::Const("ActiveTorsdag");
    ::STRINGS[62] = uString::Const("ExhibitorBackground");
    ::STRINGS[63] = uString::Const("FilterBackground");
    ::STRINGS[64] = uString::Const("program");
    ::STRINGS[65] = uString::Const("ProgramFeed");
    ::STRINGS[66] = uString::Const("ProgramDetails");
    ::STRINGS[67] = uString::Const("icebreaker");
    ::STRINGS[68] = uString::Const("popupBackground");
    ::STRINGS[69] = uString::Const("infoIcon");
    ::STRINGS[70] = uString::Const("crossIcon");
    ::STRINGS[71] = uString::Const("opacityToggle");
    ::STRINGS[72] = uString::Const("popupInfo");
    ::STRINGS[73] = uString::Const("ResultPanel");
    ::STRINGS[74] = uString::Const("DefaultPanel");
    ::STRINGS[75] = uString::Const("IceBreakerButton");
    ::STRINGS[76] = uString::Const("temp_eb15");
    ::STRINGS[77] = uString::Const("ShowResult");
    ::STRINGS[78] = uString::Const("IceBreakerIcon");
    ::STRINGS[79] = uString::Const("sponsors");
    ::STRINGS[80] = uString::Const("indicatorSponsor");
    ::STRINGS[81] = uString::Const("SponsorTab");
    ::STRINGS[82] = uString::Const("GoodiebagTab");
    ::STRINGS[83] = uString::Const("navigationSponsors");
    ::STRINGS[84] = uString::Const("sponsor");
    ::STRINGS[85] = uString::Const("goodiebag");
    ::STRINGS[86] = uString::Const("map");
    ::STRINGS[87] = uString::Const("indicator");
    ::STRINGS[88] = uString::Const("plan3Tab");
    ::STRINGS[89] = uString::Const("plan4Tab");
    ::STRINGS[90] = uString::Const("navigationControl");
    ::STRINGS[91] = uString::Const("plan3");
    ::STRINGS[92] = uString::Const("infoIconMap");
    ::STRINGS[93] = uString::Const("crossIconMap");
    ::STRINGS[94] = uString::Const("MapToggle");
    ::STRINGS[95] = uString::Const("popupInfoMap");
    ::STRINGS[96] = uString::Const("plan4");
    ::STRINGS[97] = uString::Const("infoIconMap2");
    ::STRINGS[98] = uString::Const("crossIconMap2");
    ::STRINGS[99] = uString::Const("MapToggle2");
    ::STRINGS[100] = uString::Const("popupInfoMap2");
    ::STRINGS[101] = uString::Const("aboutus");
    ::STRINGS[102] = uString::Const("indicatorAbout");
    ::STRINGS[103] = uString::Const("AboutUsTab");
    ::STRINGS[104] = uString::Const("ProjectTab");
    ::STRINGS[105] = uString::Const("navigationControlAbout");
    ::STRINGS[106] = uString::Const("about");
    ::STRINGS[107] = uString::Const("project");
    ::STRINGS[108] = uString::Const("login");
    ::STRINGS[109] = uString::Const("LoginPage");
    ::STRINGS[110] = uString::Const("temp_eb16");
    ::STRINGS[111] = uString::Const("Color");
    ::STRINGS[112] = uString::Const("Opacity");
    ::STRINGS[113] = uString::Const("Active");
    ::STRINGS[114] = uString::Const("Visibility");
    ::STRINGS[115] = uString::Const("Items");
    ::STRINGS[116] = uString::Const("Url");
    ::STRINGS[117] = uString::Const("Value");
    ::STRINGS[118] = uString::Const("Data");
    ::STRINGS[119] = uString::Const("Uri");
    ::STRINGS[120] = uString::Const("Element.LayoutMaster");
    ::STRINGS[121] = uString::Const("Linear");
    ::STRINGS[122] = uString::Const("QuadraticIn");
    ::STRINGS[123] = uString::Const("QuadraticOut");
    ::STRINGS[124] = uString::Const("QuadraticInOut");
    ::STRINGS[125] = uString::Const("CubicIn");
    ::STRINGS[126] = uString::Const("CubicOut");
    ::STRINGS[127] = uString::Const("CubicInOut");
    ::STRINGS[128] = uString::Const("QuarticIn");
    ::STRINGS[129] = uString::Const("QuarticOut");
    ::STRINGS[130] = uString::Const("QuarticInOut");
    ::STRINGS[131] = uString::Const("QuinticIn");
    ::STRINGS[132] = uString::Const("QuinticOut");
    ::STRINGS[133] = uString::Const("QuinticInOut");
    ::STRINGS[134] = uString::Const("SinusoidalIn");
    ::STRINGS[135] = uString::Const("SinusoidalOut");
    ::STRINGS[136] = uString::Const("SinusoidalInOut");
    ::STRINGS[137] = uString::Const("ExponentialIn");
    ::STRINGS[138] = uString::Const("ExponentialOut");
    ::STRINGS[139] = uString::Const("ExponentialInOut");
    ::STRINGS[140] = uString::Const("CircularIn");
    ::STRINGS[141] = uString::Const("CircularOut");
    ::STRINGS[142] = uString::Const("CircularInOut");
    ::STRINGS[143] = uString::Const("ElasticIn");
    ::STRINGS[144] = uString::Const("ElasticOut");
    ::STRINGS[145] = uString::Const("ElasticInOut");
    ::STRINGS[146] = uString::Const("BackIn");
    ::STRINGS[147] = uString::Const("BackOut");
    ::STRINGS[148] = uString::Const("BackInOut");
    ::STRINGS[149] = uString::Const("BounceIn");
    ::STRINGS[150] = uString::Const("BounceOut");
    ::STRINGS[151] = uString::Const("BounceInOut");
    ::STRINGS[152] = uString::Const("Transparent");
    ::STRINGS[153] = uString::Const("Black");
    ::STRINGS[154] = uString::Const("Silver");
    ::STRINGS[155] = uString::Const("Gray");
    ::STRINGS[156] = uString::Const("White");
    ::STRINGS[157] = uString::Const("Maroon");
    ::STRINGS[158] = uString::Const("Red");
    ::STRINGS[159] = uString::Const("Purple");
    ::STRINGS[160] = uString::Const("Fuchsia");
    ::STRINGS[161] = uString::Const("Green");
    ::STRINGS[162] = uString::Const("Lime");
    ::STRINGS[163] = uString::Const("Olive");
    ::STRINGS[164] = uString::Const("Yellow");
    ::STRINGS[165] = uString::Const("Navy");
    ::STRINGS[166] = uString::Const("Blue");
    ::STRINGS[167] = uString::Const("Teal");
    ::STRINGS[168] = uString::Const("Aqua");
    ::STRINGS[169] = uString::Const("TopLeft");
    ::STRINGS[170] = uString::Const("Center");
    ::STRINGS[171] = uString::Const("Anchor");
    ::STRINGS[172] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[173] = uString::Const("VerticalBoxCenter");
    ::STRINGS[174] = uString::Const("TransformOriginOffset");
    ::STRINGS[175] = uString::Const("PositionOffset");
    ::STRINGS[176] = uString::Const("SizeFactor");
    ::STRINGS[177] = uString::Const("Size");
    ::STRINGS[178] = uString::Const("GiveFocus");
    ::STRINGS[179] = uString::Const("Keyboard");
    ::STRINGS[180] = uString::Const("LayoutChange");
    ::STRINGS[181] = uString::Const("WorldPositionChange");
    ::STRINGS[182] = uString::Const("PositionChange");
    ::STRINGS[183] = uString::Const("SizeChange");
    ::STRINGS[184] = uString::Const("Points");
    ::STRINGS[185] = uString::Const("Pixels");
    ::STRINGS[186] = uString::Const("ContentSize");
    ::STRINGS[187] = uString::Const("ScrollViewSize");
    ::STRINGS[188] = uString::Const("PreloadRetain");
    ::STRINGS[189] = uString::Const("UnloadUnused");
    ::STRINGS[190] = uString::Const("QuickUnload");
    ::STRINGS[191] = uString::Const("UnloadInBackground");
    ::STRINGS[192] = uString::Const("Thin");
    ::STRINGS[193] = uString::Const("Light");
    ::STRINGS[194] = uString::Const("Regular");
    ::STRINGS[195] = uString::Const("Medium");
    ::STRINGS[196] = uString::Const("Bold");
    ::STRINGS[197] = uString::Const("ThinItalic");
    ::STRINGS[198] = uString::Const("LightItalic");
    ::STRINGS[199] = uString::Const("Italic");
    ::STRINGS[200] = uString::Const("MediumItalic");
    ::STRINGS[201] = uString::Const("BoldItalic");
    ::STRINGS[202] = uString::Const("PlatformDefault");
    ::STRINGS[203] = uString::Const("Identity");
    ::STRINGS[204] = uString::Const("Local");
    ::STRINGS[205] = uString::Const("ParentSize");
    ::STRINGS[206] = uString::Const("Width");
    ::STRINGS[207] = uString::Const("Height");
    ::STRINGS[208] = uString::Const("Raleway");
    ::STRINGS[209] = uString::Const("RalewayBlack");
    ::STRINGS[210] = uString::Const("TitleFont");
    ::STRINGS[211] = uString::Const("closeTest");
    ::STRINGS[212] = uString::Const("dataSource");
    ::STRINGS[213] = uString::Const("image");
    ::STRINGS[214] = uString::Const("title");
    ::STRINGS[215] = uString::Const("text");
    ::STRINGS[216] = uString::Const("goToEvent");
    ::STRINGS[217] = uString::Const("selectedArticle");
    ::STRINGS[218] = uString::Const("name");
    ::STRINGS[219] = uString::Const("date");
    ::STRINGS[220] = uString::Const(" ");
    ::STRINGS[221] = uString::Const("time");
    ::STRINGS[222] = uString::Const("location");
    ::STRINGS[223] = uString::Const("description");
    ::STRINGS[224] = uString::Const("selectedLecture");
    ::STRINGS[225] = uString::Const("search");
    ::STRINGS[226] = uString::Const("logo");
    ::STRINGS[227] = uString::Const("dates");
    ::STRINGS[228] = uString::Const("offer");
    ::STRINGS[229] = uString::Const("education");
    ::STRINGS[230] = uString::Const("link");
    ::STRINGS[231] = uString::Const("selectedExhibitor");
    ::STRINGS[232] = uString::Const("dataProgram");
    ::STRINGS[233] = uString::Const("selectedProgram");
    ::STRINGS[234] = uString::Const("IceBreaker");
    ::STRINGS[235] = uString::Const("restart");
    ::STRINGS[236] = uString::Const("IceBreakers");
    ::STRINGS[237] = uString::Const("dataSponsors");
    ::STRINGS[238] = uString::Const("dataGoodiebag");
    ::STRINGS[239] = uString::Const("dataInfo");
    ::STRINGS[240] = uString::Const("dataContact");
    ::STRINGS[241] = uString::Const("email");
    ::STRINGS[242] = uString::Const("signup");
    ::STRINGS[243] = uString::Const("\n"
        "\tvar Observable = require('FuseJS/Observable');\n"
        "\n"
        "    function closeTest(){\n"
        "        TheSidebar.dismiss()\n"
        "    }\n"
        "\n"
        "    module.exports = {\n"
        "\t\t\tcloseTest: closeTest\n"
        "\t\t};\n"
        "\t");
    ::STRINGS[244] = uString::Const("MainView.ux");
    ::STRINGS[245] = uString::Const("LOGGA IN");
    ::STRINGS[246] = uString::Const("STJ\303\204RNMARKERADE UTST\303\204LLARE");
    ::STRINGS[247] = uString::Const("2* ,3* ,1*");
    ::STRINGS[248] = uString::Const("HANDELSBANKEN ONSDAG 8/11");
    ::STRINGS[249] = uString::Const("NYHETER");
    ::STRINGS[250] = uString::Const("PARTNERS");
    ::STRINGS[251] = uString::Const("UTST\303\204LLARE");
    ::STRINGS[252] = uString::Const("PROGRAM");
    ::STRINGS[253] = uString::Const("ICE BREAKER");
    ::STRINGS[254] = uString::Const("SPONSORER");
    ::STRINGS[255] = uString::Const("KARTA");
    ::STRINGS[256] = uString::Const("OM OSS");
    ::STRINGS[257] = uString::Const("FILTRERA");
    ::STRINGS[258] = uString::Const("Pages/News/NewsPage.ux");
    ::STRINGS[259] = uString::Const("G\303\205 TILL EVENT");
    ::STRINGS[260] = uString::Const("BOKA F\303\226REL\303\204SNING");
    ::STRINGS[261] = uString::Const("Pages/Partners/PartnersPage.ux");
    ::STRINGS[262] = uString::Const("Pages/Exhibitor/ExhibitorPage.ux");
    ::STRINGS[263] = uString::Const("S\303\266k utst\303\244llare");
    ::STRINGS[264] = uString::Const("H\303\204R FINNS VI");
    ::STRINGS[265] = uString::Const("1* ,1.5*, 1*");
    ::STRINGS[266] = uString::Const("VI ERBJUDER");
    ::STRINGS[267] = uString::Const("TYP AV JOBB");
    ::STRINGS[268] = uString::Const("VI S\303\226KER");
    ::STRINGS[269] = uString::Const("TYP AV UTBILDNING");
    ::STRINGS[270] = uString::Const("BES\303\226K WEBBPLATS");
    ::STRINGS[271] = uString::Const("EKONOM");
    ::STRINGS[272] = uString::Const("MILJ\303\226VETARE");
    ::STRINGS[273] = uString::Const("JURIST");
    ::STRINGS[274] = uString::Const("LOGISTIKER");
    ::STRINGS[275] = uString::Const("SOMMARJOBB");
    ::STRINGS[276] = uString::Const("UPPSATS");
    ::STRINGS[277] = uString::Const("INTERNSHIP");
    ::STRINGS[278] = uString::Const("HELTID");
    ::STRINGS[279] = uString::Const("EXTRAJOBB");
    ::STRINGS[280] = uString::Const("TYP AV EXAMEN");
    ::STRINGS[281] = uString::Const("KANDIDAT");
    ::STRINGS[282] = uString::Const("MASTER");
    ::STRINGS[283] = uString::Const("VILKEN DAG(AR)");
    ::STRINGS[284] = uString::Const("ONSDAG 8/11");
    ::STRINGS[285] = uString::Const("TORSDAG 9/11");
    ::STRINGS[286] = uString::Const("Pages/Program/ProgramPage.ux");
    ::STRINGS[287] = uString::Const("Pages/IceBreakers/IceBreakersPage.ux");
    ::STRINGS[288] = uString::Const("clicked");
    ::STRINGS[289] = uString::Const("Gadden har 4000 bes\303\266kare varje \303\245r. Hur sjutton g\303\266r man ett bra och best\303\245ende f\303\266rsta intryck i den konkurrensen?\n"
        "\n"
        "                    Lugn, vi hj\303\244lper dig! Skaka telefonen och f\303\245 tips p\303\245 hur du kan bryta isen med din dr\303\266marbetsgivare.");
    ::STRINGS[290] = uString::Const("SHAKE TO BREAK");
    ::STRINGS[291] = uString::Const("Skaka telefonen f\303\266r att f\303\245 tips p\303\245 ice breakers");
    ::STRINGS[292] = uString::Const("Pages/Sponsors/SponsorsPage.ux");
    ::STRINGS[293] = uString::Const("GOODIEBAG");
    ::STRINGS[294] = uString::Const("Tack!");
    ::STRINGS[295] = uString::Const("Pages/Map/MapPage.ux");
    ::STRINGS[296] = uString::Const("PLAN 3");
    ::STRINGS[297] = uString::Const("PLAN 4");
    ::STRINGS[298] = uString::Const("Infodisk");
    ::STRINGS[299] = uString::Const("F\303\266retagsgarderob");
    ::STRINGS[300] = uString::Const("F\303\266retagslounge");
    ::STRINGS[301] = uString::Const("Studentgarderob");
    ::STRINGS[302] = uString::Const("Studentlounge");
    ::STRINGS[303] = uString::Const("Pages/AboutUs/AboutUsPage.ux");
    ::STRINGS[304] = uString::Const("PROJEKTKOMMITT\303\210N");
    ::STRINGS[305] = uString::Const("PROJEKTKOMMIT\303\211N");
    ::STRINGS[306] = uString::Const("Pages/Login/Login.ux");
    ::STRINGS[307] = uString::Const("E-POST");
    ::STRINGS[308] = uString::Const("NAMN");
    ::STRINGS[309] = uString::Const("Har du inget konto? Ora dig inte, skriv in ditt namn samt epost adress s\303\245 skapar vi ett \303\245t dig!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Controls::TextInputActionHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(11,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, about), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, aboutus), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, AboutUsTab), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveEkonom), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveExtrajobb), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveHeltid), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveInternship), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveJurist), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveKandidat), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveLogostiker), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveMaster), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveMiljovetare), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveOnsdag), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveSommarjobb), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveTorsdag), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ActiveUppsats), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, BackgroundImage), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleEkonom), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleEkonom_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleExtrajobb), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleExtrajobb_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleHeltid), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleHeltid_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleInternship), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleInternship_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleJurist), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleJurist_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleKandidat), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleKandidat_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleLogostiker), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleLogostiker_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleMaster), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleMaster_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleMiljovetare), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleMiljovetare_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleOnsdag), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleOnsdag_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleSommarjobb), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleSommarjobb_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleTorsdag), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleTorsdag_Color_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, CircleUppsats), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, CircleUppsats_Color_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, crossIcon), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, crossIcon_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, crossIconMap), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, crossIconMap_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, crossIconMap2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, crossIconMap2_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, DefaultPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, DefaultPanel_Opacity_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, exhibitor), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, ExhibitorBackground), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, ExhibitorBackground_Visibility_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ExhibitorDetails), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, ExhibitorDetails_Visibility_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ExibitorList), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, ExibitorList_Visibility_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, FilterArrow), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, FilterArrow_Visibility_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, FilterBackground), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, FilterBackground_Visibility_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::MainView, FilterButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, FilterButton_Visibility_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, FilterPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, FilterPanel_Visibility_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, GaddenLogo), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, GaddenLogo_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, goodiebag), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, GoodiebagTab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, icebreaker), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, IceBreakerButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, IceBreakerButton_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, IceBreakerIcon), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, IceBreakerIcon_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, indicator), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::MainView, indicator_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, indicatorAbout), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::MainView, indicatorAbout_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, indicatorSponsor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::MainView, indicatorSponsor_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, infoIcon), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, infoIcon_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, infoIconMap), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, infoIconMap_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, infoIconMap2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, infoIconMap2_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, LectureDetails), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, LectureDetails_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, login), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, LoginPage), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, logoImage), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, map), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, MapToggle), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, MapToggle2), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigation_Active_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigationControl), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigationControl_Active_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigationControlAbout), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigationControlAbout_Active_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigationSponsors), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigationSponsors_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, news), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, NewsDetails), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, NewsDetails_Visibility_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, NewsFeed), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, NewsFeed_Visibility_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, NotInlogged), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, opacityToggle), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, partners), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::MainView, PartnerTitle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, PartnerTitle_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, plan3), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, plan3Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, plan4), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, plan4Tab), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, popupBackground), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, popupInfo), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, popupInfo_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, popupInfoMap), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, popupInfoMap_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, popupInfoMap2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, popupInfoMap2_Opacity_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, program), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ProgramDetails), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, ProgramDetails_Visibility_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ProgramFeed), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, ProgramFeed_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, project), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ProjectTab), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ResultPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, ResultPanel_Opacity_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MainView, router), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(::g::MainView, shadow), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, shadow_Color_inst), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(::g::MainView, shadowProfile), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, ShowResult), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, sidebar), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, sidebarFade), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, sidebarFade_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, sidebarProfile), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, sponsor), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, sponsors), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, SponsorTab), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb10), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb11), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb15), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb16), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb8), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp10_Data_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp11_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp12_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp13_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp15_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp16_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp17_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp18_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp19_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp20_Uri_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp21_Data_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp22_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp23_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp24_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp25_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp26_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp27_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp28_Data_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp29_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp30_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp31_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp32_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp33_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp34_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp35_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp36_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp4_Data_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp5_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp9_Value_inst), 0,
        ::g::Fuse::Controls::EdgeNavigator_typeof(), offsetof(::g::MainView, TheSidebar), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, TitleTest), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector100_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector101_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector102_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector103_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector104_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector105_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector106_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector107_, uFieldFlagsStatic,
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
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector32_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector33_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector34_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector35_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector36_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector37_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector38_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector39_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector40_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector41_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector42_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector43_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector44_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector45_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector46_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector47_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector48_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector49_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector50_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector51_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector52_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector53_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector54_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector55_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector56_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector57_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector58_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector59_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector60_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector61_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector62_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector63_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector64_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector65_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector66_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector67_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector68_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector69_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector70_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector71_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector72_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector73_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector74_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector75_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector76_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector77_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector78_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector79_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector80_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector81_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector82_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector83_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector84_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector85_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector86_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector87_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector88_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector89_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector90_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector91_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector92_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector93_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector94_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector95_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector96_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector97_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector98_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector99_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Raleway_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::RalewayBlack_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::TitleFont_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Raleway", 318),
        new uField("RalewayBlack", 319),
        new uField("TitleFont", 320));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 321;
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

// public MainView() :1267
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :1271
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :1267
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector100_;
::g::Uno::UX::Selector MainView::__selector101_;
::g::Uno::UX::Selector MainView::__selector102_;
::g::Uno::UX::Selector MainView::__selector103_;
::g::Uno::UX::Selector MainView::__selector104_;
::g::Uno::UX::Selector MainView::__selector105_;
::g::Uno::UX::Selector MainView::__selector106_;
::g::Uno::UX::Selector MainView::__selector107_;
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
::g::Uno::UX::Selector MainView::__selector32_;
::g::Uno::UX::Selector MainView::__selector33_;
::g::Uno::UX::Selector MainView::__selector34_;
::g::Uno::UX::Selector MainView::__selector35_;
::g::Uno::UX::Selector MainView::__selector36_;
::g::Uno::UX::Selector MainView::__selector37_;
::g::Uno::UX::Selector MainView::__selector38_;
::g::Uno::UX::Selector MainView::__selector39_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector40_;
::g::Uno::UX::Selector MainView::__selector41_;
::g::Uno::UX::Selector MainView::__selector42_;
::g::Uno::UX::Selector MainView::__selector43_;
::g::Uno::UX::Selector MainView::__selector44_;
::g::Uno::UX::Selector MainView::__selector45_;
::g::Uno::UX::Selector MainView::__selector46_;
::g::Uno::UX::Selector MainView::__selector47_;
::g::Uno::UX::Selector MainView::__selector48_;
::g::Uno::UX::Selector MainView::__selector49_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector50_;
::g::Uno::UX::Selector MainView::__selector51_;
::g::Uno::UX::Selector MainView::__selector52_;
::g::Uno::UX::Selector MainView::__selector53_;
::g::Uno::UX::Selector MainView::__selector54_;
::g::Uno::UX::Selector MainView::__selector55_;
::g::Uno::UX::Selector MainView::__selector56_;
::g::Uno::UX::Selector MainView::__selector57_;
::g::Uno::UX::Selector MainView::__selector58_;
::g::Uno::UX::Selector MainView::__selector59_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector60_;
::g::Uno::UX::Selector MainView::__selector61_;
::g::Uno::UX::Selector MainView::__selector62_;
::g::Uno::UX::Selector MainView::__selector63_;
::g::Uno::UX::Selector MainView::__selector64_;
::g::Uno::UX::Selector MainView::__selector65_;
::g::Uno::UX::Selector MainView::__selector66_;
::g::Uno::UX::Selector MainView::__selector67_;
::g::Uno::UX::Selector MainView::__selector68_;
::g::Uno::UX::Selector MainView::__selector69_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector70_;
::g::Uno::UX::Selector MainView::__selector71_;
::g::Uno::UX::Selector MainView::__selector72_;
::g::Uno::UX::Selector MainView::__selector73_;
::g::Uno::UX::Selector MainView::__selector74_;
::g::Uno::UX::Selector MainView::__selector75_;
::g::Uno::UX::Selector MainView::__selector76_;
::g::Uno::UX::Selector MainView::__selector77_;
::g::Uno::UX::Selector MainView::__selector78_;
::g::Uno::UX::Selector MainView::__selector79_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector80_;
::g::Uno::UX::Selector MainView::__selector81_;
::g::Uno::UX::Selector MainView::__selector82_;
::g::Uno::UX::Selector MainView::__selector83_;
::g::Uno::UX::Selector MainView::__selector84_;
::g::Uno::UX::Selector MainView::__selector85_;
::g::Uno::UX::Selector MainView::__selector86_;
::g::Uno::UX::Selector MainView::__selector87_;
::g::Uno::UX::Selector MainView::__selector88_;
::g::Uno::UX::Selector MainView::__selector89_;
::g::Uno::UX::Selector MainView::__selector9_;
::g::Uno::UX::Selector MainView::__selector90_;
::g::Uno::UX::Selector MainView::__selector91_;
::g::Uno::UX::Selector MainView::__selector92_;
::g::Uno::UX::Selector MainView::__selector93_;
::g::Uno::UX::Selector MainView::__selector94_;
::g::Uno::UX::Selector MainView::__selector95_;
::g::Uno::UX::Selector MainView::__selector96_;
::g::Uno::UX::Selector MainView::__selector97_;
::g::Uno::UX::Selector MainView::__selector98_;
::g::Uno::UX::Selector MainView::__selector99_;
uSStrong< ::g::Fuse::Font*> MainView::Raleway_;
uSStrong< ::g::Fuse::Font*> MainView::RalewayBlack_;
uSStrong< ::g::Fuse::Font*> MainView::TitleFont_;

// public MainView() [instance] :1267
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :1271
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp37 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp38 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp39 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Email* temp40 = ::g::Fuse::Reactive::FuseJS::Email::New2();
    ::g::Fuse::Reactive::FuseJS::InterApp* temp41 = ::g::Fuse::Reactive::FuseJS::InterApp::New3();
    ::g::Fuse::Reactive::FuseJS::Maps* temp42 = ::g::Fuse::Reactive::FuseJS::Maps::New2();
    ::g::Fuse::Reactive::FuseJS::Phone* temp43 = ::g::Fuse::Reactive::FuseJS::Phone::New2();
    ::g::Fuse::Drawing::BrushConverter* temp44 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp45 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp46 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp47 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp48 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp49 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp50 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp51 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp52 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp53 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp54 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp55 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp56 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp57 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    shadow = ::g::Fuse::Controls::Shadow::New2();
    shadow_Color_inst = ::g::gadden_FuseControlsShadow_Color_Property::New1(shadow, MainView::__selector0());
    sidebarFade = ::g::Fuse::Controls::Rectangle::New3();
    sidebarFade_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(sidebarFade, MainView::__selector1());
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigation, MainView::__selector2());
    ::g::Fuse::Reactive::Data* temp58 = ::g::Fuse::Reactive::Data::New1(::STRINGS[211/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp59 = ::g::Fuse::Reactive::Data::New1(::STRINGS[211/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp60 = ::g::Fuse::Reactive::Data::New1(::STRINGS[211/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp61 = ::g::Fuse::Reactive::Data::New1(::STRINGS[211/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp62 = ::g::Fuse::Reactive::Data::New1(::STRINGS[211/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp63 = ::g::Fuse::Reactive::Data::New1(::STRINGS[211/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp64 = ::g::Fuse::Reactive::Data::New1(::STRINGS[211/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp65 = ::g::Fuse::Reactive::Data::New1(::STRINGS[211/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp66 = ::g::Fuse::Reactive::Data::New1(::STRINGS[211/*"closeTest"*/]);
    ExhibitorBackground = ::g::Fuse::Controls::Image::New3();
    ExhibitorBackground_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(ExhibitorBackground, MainView::__selector3());
    FilterBackground = ::g::Fuse::Controls::Image::New3();
    FilterBackground_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(FilterBackground, MainView::__selector3());
    FilterPanel = ::g::Fuse::Controls::Panel::New3();
    FilterPanel_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(FilterPanel, MainView::__selector3());
    ExibitorList = ::g::Fuse::Controls::Panel::New3();
    ExibitorList_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(ExibitorList, MainView::__selector3());
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp67 = ::g::Fuse::Reactive::Data::New1(::STRINGS[212/*"dataSource"*/]);
    NewsDetails = ::g::Fuse::Controls::Panel::New3();
    NewsDetails_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(NewsDetails, MainView::__selector3());
    NewsFeed = ::g::Fuse::Controls::Panel::New3();
    NewsFeed_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(NewsFeed, MainView::__selector3());
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    temp1_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp1, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp68 = ::g::Fuse::Reactive::Data::New1(::STRINGS[213/*"image"*/]);
    ::g::Fuse::Reactive::Data* temp69 = ::g::Fuse::Reactive::Data::New1(::STRINGS[214/*"title"*/]);
    ::g::Title* temp2 = ::g::Title::New4();
    temp2_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp2, MainView::__selector6());
    ::g::Fuse::Reactive::ToUpper* temp70 = ::g::Fuse::Reactive::ToUpper::New1(temp69);
    ::g::Paragraph* temp3 = ::g::Paragraph::New4();
    temp3_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp3, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp71 = ::g::Fuse::Reactive::Data::New1(::STRINGS[215/*"text"*/]);
    LectureDetails = ::g::Fuse::Controls::Panel::New3();
    LectureDetails_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(LectureDetails, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp72 = ::g::Fuse::Reactive::Data::New1(::STRINGS[216/*"goToEvent"*/]);
    ::g::Fuse::Reactive::With* temp4 = ::g::Fuse::Reactive::With::New2();
    temp4_Data_inst = ::g::gadden_FuseReactiveWith_Data_Property::New1(temp4, MainView::__selector7());
    ::g::Fuse::Reactive::Data* temp73 = ::g::Fuse::Reactive::Data::New1(::STRINGS[217/*"selectedArt...*/]);
    ::g::Fuse::Controls::Image* temp5 = ::g::Fuse::Controls::Image::New3();
    temp5_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp5, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp74 = ::g::Fuse::Reactive::Data::New1(::STRINGS[213/*"image"*/]);
    ::g::Fuse::Reactive::Data* temp75 = ::g::Fuse::Reactive::Data::New1(::STRINGS[218/*"name"*/]);
    ::g::Title* temp6 = ::g::Title::New4();
    temp6_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp6, MainView::__selector6());
    ::g::Fuse::Reactive::ToUpper* temp76 = ::g::Fuse::Reactive::ToUpper::New1(temp75);
    ::g::Fuse::Reactive::Data* temp77 = ::g::Fuse::Reactive::Data::New1(::STRINGS[219/*"date"*/]);
    ::g::Fuse::Reactive::ToUpper* temp78 = ::g::Fuse::Reactive::ToUpper::New1(temp77);
    uString* temp79 = ::STRINGS[220/*" "*/];
    ::g::Fuse::Reactive::Constant* temp80 = ::g::Fuse::Reactive::Constant::New1(temp79);
    ::g::Fuse::Reactive::Data* temp81 = ::g::Fuse::Reactive::Data::New1(::STRINGS[221/*"time"*/]);
    ::g::Fuse::Reactive::Add* temp82 = ::g::Fuse::Reactive::Add::New1(temp80, temp81);
    ::g::SmallText* temp7 = ::g::SmallText::New4();
    temp7_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp7, MainView::__selector6());
    ::g::Fuse::Reactive::Add* temp83 = ::g::Fuse::Reactive::Add::New1(temp78, temp82);
    ::g::Fuse::Reactive::Data* temp84 = ::g::Fuse::Reactive::Data::New1(::STRINGS[222/*"location"*/]);
    ::g::SmallText* temp8 = ::g::SmallText::New4();
    temp8_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp8, MainView::__selector6());
    ::g::Fuse::Reactive::ToUpper* temp85 = ::g::Fuse::Reactive::ToUpper::New1(temp84);
    ::g::Paragraph* temp9 = ::g::Paragraph::New4();
    temp9_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp9, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp86 = ::g::Fuse::Reactive::Data::New1(::STRINGS[223/*"description"*/]);
    ::g::Fuse::Reactive::With* temp10 = ::g::Fuse::Reactive::With::New2();
    temp10_Data_inst = ::g::gadden_FuseReactiveWith_Data_Property::New1(temp10, MainView::__selector7());
    ::g::Fuse::Reactive::Data* temp87 = ::g::Fuse::Reactive::Data::New1(::STRINGS[224/*"selectedLec...*/]);
    GaddenLogo = ::g::Fuse::Controls::Image::New3();
    GaddenLogo_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(GaddenLogo, MainView::__selector3());
    PartnerTitle = ::g::Fuse::Controls::Text::New3();
    PartnerTitle_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(PartnerTitle, MainView::__selector3());
    ::g::Fuse::Reactive::Each* temp11 = ::g::Fuse::Reactive::Each::New4();
    temp11_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp11, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp88 = ::g::Fuse::Reactive::Data::New1(::STRINGS[30/*"partners"*/]);
    FilterButton = ::g::Fuse::Controls::Text::New3();
    FilterButton_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(FilterButton, MainView::__selector3());
    FilterArrow = ::g::Fuse::Controls::Image::New3();
    FilterArrow_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(FilterArrow, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp89 = ::g::Fuse::Reactive::Data::New1(::STRINGS[225/*"search"*/]);
    ::g::Fuse::Reactive::Each* temp12 = ::g::Fuse::Reactive::Each::New4();
    temp12_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp12, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp90 = ::g::Fuse::Reactive::Data::New1(::STRINGS[31/*"exhibitor"*/]);
    ExhibitorDetails = ::g::Fuse::Controls::Panel::New3();
    ExhibitorDetails_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(ExhibitorDetails, MainView::__selector3());
    ::g::Fuse::Controls::Image* temp13 = ::g::Fuse::Controls::Image::New3();
    temp13_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp13, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp91 = ::g::Fuse::Reactive::Data::New1(::STRINGS[226/*"logo"*/]);
    ::g::Fuse::Reactive::Data* temp92 = ::g::Fuse::Reactive::Data::New1(::STRINGS[218/*"name"*/]);
    ::g::Fuse::Controls::Text* temp14 = ::g::Fuse::Controls::Text::New3();
    temp14_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp14, MainView::__selector6());
    ::g::Fuse::Reactive::ToUpper* temp93 = ::g::Fuse::Reactive::ToUpper::New1(temp92);
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    temp15_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp15, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp94 = ::g::Fuse::Reactive::Data::New1(::STRINGS[227/*"dates"*/]);
    ::g::Paragraph* temp16 = ::g::Paragraph::New4();
    temp16_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp16, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp95 = ::g::Fuse::Reactive::Data::New1(::STRINGS[106/*"about"*/]);
    ::g::Fuse::Controls::Image* temp17 = ::g::Fuse::Controls::Image::New3();
    temp17_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp17, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp96 = ::g::Fuse::Reactive::Data::New1(::STRINGS[86/*"map"*/]);
    ::g::Fuse::Reactive::Each* temp18 = ::g::Fuse::Reactive::Each::New4();
    temp18_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp18, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp97 = ::g::Fuse::Reactive::Data::New1(::STRINGS[228/*"offer"*/]);
    ::g::Fuse::Reactive::Each* temp19 = ::g::Fuse::Reactive::Each::New4();
    temp19_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp19, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp98 = ::g::Fuse::Reactive::Data::New1(::STRINGS[229/*"education"*/]);
    ::g::Fuse::Triggers::Actions::LaunchUri* temp20 = ::g::Fuse::Triggers::Actions::LaunchUri::New2();
    temp20_Uri_inst = ::g::gadden_FuseTriggersActionsLaunchUri_Uri_Property::New1(temp20, MainView::__selector8());
    ::g::Fuse::Reactive::Data* temp99 = ::g::Fuse::Reactive::Data::New1(::STRINGS[230/*"link"*/]);
    ::g::Fuse::Reactive::With* temp21 = ::g::Fuse::Reactive::With::New2();
    temp21_Data_inst = ::g::gadden_FuseReactiveWith_Data_Property::New1(temp21, MainView::__selector7());
    ::g::Fuse::Reactive::Data* temp100 = ::g::Fuse::Reactive::Data::New1(::STRINGS[231/*"selectedExh...*/]);
    CircleJurist = ::g::Fuse::Controls::Circle::New3();
    CircleJurist_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleJurist, MainView::__selector0());
    CircleEkonom = ::g::Fuse::Controls::Circle::New3();
    CircleEkonom_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleEkonom, MainView::__selector0());
    CircleMiljovetare = ::g::Fuse::Controls::Circle::New3();
    CircleMiljovetare_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleMiljovetare, MainView::__selector0());
    CircleLogostiker = ::g::Fuse::Controls::Circle::New3();
    CircleLogostiker_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleLogostiker, MainView::__selector0());
    CircleSommarjobb = ::g::Fuse::Controls::Circle::New3();
    CircleSommarjobb_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleSommarjobb, MainView::__selector0());
    CircleUppsats = ::g::Fuse::Controls::Circle::New3();
    CircleUppsats_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleUppsats, MainView::__selector0());
    CircleInternship = ::g::Fuse::Controls::Circle::New3();
    CircleInternship_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleInternship, MainView::__selector0());
    CircleHeltid = ::g::Fuse::Controls::Circle::New3();
    CircleHeltid_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleHeltid, MainView::__selector0());
    CircleExtrajobb = ::g::Fuse::Controls::Circle::New3();
    CircleExtrajobb_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleExtrajobb, MainView::__selector0());
    CircleKandidat = ::g::Fuse::Controls::Circle::New3();
    CircleKandidat_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleKandidat, MainView::__selector0());
    CircleMaster = ::g::Fuse::Controls::Circle::New3();
    CircleMaster_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleMaster, MainView::__selector0());
    CircleOnsdag = ::g::Fuse::Controls::Circle::New3();
    CircleOnsdag_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleOnsdag, MainView::__selector0());
    CircleTorsdag = ::g::Fuse::Controls::Circle::New3();
    CircleTorsdag_Color_inst = ::g::gadden_FuseControlsShape_Color_Property::New1(CircleTorsdag, MainView::__selector0());
    ::g::Fuse::Reactive::Each* temp22 = ::g::Fuse::Reactive::Each::New4();
    temp22_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp22, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp101 = ::g::Fuse::Reactive::Data::New1(::STRINGS[232/*"dataProgram"*/]);
    ProgramDetails = ::g::Fuse::Controls::Panel::New3();
    ProgramDetails_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(ProgramDetails, MainView::__selector3());
    ProgramFeed = ::g::Fuse::Controls::Panel::New3();
    ProgramFeed_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(ProgramFeed, MainView::__selector3());
    ::g::Fuse::Controls::Image* temp23 = ::g::Fuse::Controls::Image::New3();
    temp23_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp23, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp102 = ::g::Fuse::Reactive::Data::New1(::STRINGS[213/*"image"*/]);
    ::g::Fuse::Reactive::Data* temp103 = ::g::Fuse::Reactive::Data::New1(::STRINGS[218/*"name"*/]);
    ::g::Title* temp24 = ::g::Title::New4();
    temp24_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp24, MainView::__selector6());
    ::g::Fuse::Reactive::ToUpper* temp104 = ::g::Fuse::Reactive::ToUpper::New1(temp103);
    ::g::Fuse::Reactive::Data* temp105 = ::g::Fuse::Reactive::Data::New1(::STRINGS[219/*"date"*/]);
    ::g::Fuse::Reactive::ToUpper* temp106 = ::g::Fuse::Reactive::ToUpper::New1(temp105);
    uString* temp107 = ::STRINGS[220/*" "*/];
    ::g::Fuse::Reactive::Constant* temp108 = ::g::Fuse::Reactive::Constant::New1(temp107);
    ::g::Fuse::Reactive::Data* temp109 = ::g::Fuse::Reactive::Data::New1(::STRINGS[221/*"time"*/]);
    ::g::Fuse::Reactive::Add* temp110 = ::g::Fuse::Reactive::Add::New1(temp108, temp109);
    ::g::SmallText* temp25 = ::g::SmallText::New4();
    temp25_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp25, MainView::__selector6());
    ::g::Fuse::Reactive::Add* temp111 = ::g::Fuse::Reactive::Add::New1(temp106, temp110);
    ::g::Fuse::Reactive::Data* temp112 = ::g::Fuse::Reactive::Data::New1(::STRINGS[222/*"location"*/]);
    ::g::SmallText* temp26 = ::g::SmallText::New4();
    temp26_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp26, MainView::__selector6());
    ::g::Fuse::Reactive::ToUpper* temp113 = ::g::Fuse::Reactive::ToUpper::New1(temp112);
    ::g::Paragraph* temp27 = ::g::Paragraph::New4();
    temp27_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp27, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp114 = ::g::Fuse::Reactive::Data::New1(::STRINGS[223/*"description"*/]);
    ::g::Fuse::Reactive::With* temp28 = ::g::Fuse::Reactive::With::New2();
    temp28_Data_inst = ::g::gadden_FuseReactiveWith_Data_Property::New1(temp28, MainView::__selector7());
    ::g::Fuse::Reactive::Data* temp115 = ::g::Fuse::Reactive::Data::New1(::STRINGS[233/*"selectedPro...*/]);
    popupInfo = ::g::Fuse::Controls::Panel::New3();
    popupInfo_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(popupInfo, MainView::__selector1());
    infoIcon = ::g::Fuse::Controls::Image::New3();
    infoIcon_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(infoIcon, MainView::__selector1());
    crossIcon = ::g::Fuse::Controls::Image::New3();
    crossIcon_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(crossIcon, MainView::__selector1());
    ::g::Fuse::Controls::Text* temp29 = ::g::Fuse::Controls::Text::New3();
    temp29_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp29, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp116 = ::g::Fuse::Reactive::Data::New1(::STRINGS[234/*"IceBreaker"*/]);
    ::g::Fuse::Reactive::Data* temp117 = ::g::Fuse::Reactive::Data::New1(::STRINGS[235/*"restart"*/]);
    ResultPanel = ::g::Fuse::Controls::Panel::New3();
    ResultPanel_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(ResultPanel, MainView::__selector1());
    DefaultPanel = ::g::Fuse::Controls::Panel::New3();
    DefaultPanel_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(DefaultPanel, MainView::__selector1());
    IceBreakerIcon = ::g::Fuse::Controls::Image::New3();
    IceBreakerIcon_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(IceBreakerIcon, MainView::__selector1());
    IceBreakerButton = ::g::Fuse::Controls::Image::New3();
    IceBreakerButton_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(IceBreakerButton, MainView::__selector1());
    ::g::Fuse::Reactive::Each* temp30 = ::g::Fuse::Reactive::Each::New4();
    temp30_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp30, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp118 = ::g::Fuse::Reactive::Data::New1(::STRINGS[236/*"IceBreakers"*/]);
    navigationSponsors = ::g::Fuse::Controls::PageControl::New4();
    navigationSponsors_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationSponsors, MainView::__selector2());
    indicatorSponsor = ::g::Fuse::Controls::Rectangle::New3();
    indicatorSponsor_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicatorSponsor, MainView::__selector9());
    ::g::Fuse::Reactive::Each* temp31 = ::g::Fuse::Reactive::Each::New4();
    temp31_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp31, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp119 = ::g::Fuse::Reactive::Data::New1(::STRINGS[237/*"dataSponsors"*/]);
    ::g::Fuse::Reactive::Each* temp32 = ::g::Fuse::Reactive::Each::New4();
    temp32_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp32, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp120 = ::g::Fuse::Reactive::Data::New1(::STRINGS[238/*"dataGoodiebag"*/]);
    navigationControl = ::g::Fuse::Controls::PageControl::New4();
    navigationControl_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationControl, MainView::__selector2());
    indicator = ::g::Fuse::Controls::Panel::New3();
    indicator_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicator, MainView::__selector9());
    popupInfoMap = ::g::Fuse::Controls::Panel::New3();
    popupInfoMap_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(popupInfoMap, MainView::__selector1());
    infoIconMap = ::g::Fuse::Controls::Image::New3();
    infoIconMap_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(infoIconMap, MainView::__selector1());
    crossIconMap = ::g::Fuse::Controls::Image::New3();
    crossIconMap_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(crossIconMap, MainView::__selector1());
    popupInfoMap2 = ::g::Fuse::Controls::Panel::New3();
    popupInfoMap2_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(popupInfoMap2, MainView::__selector1());
    infoIconMap2 = ::g::Fuse::Controls::Image::New3();
    infoIconMap2_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(infoIconMap2, MainView::__selector1());
    crossIconMap2 = ::g::Fuse::Controls::Image::New3();
    crossIconMap2_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(crossIconMap2, MainView::__selector1());
    navigationControlAbout = ::g::Fuse::Controls::PageControl::New4();
    navigationControlAbout_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationControlAbout, MainView::__selector2());
    indicatorAbout = ::g::Fuse::Controls::Rectangle::New3();
    indicatorAbout_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicatorAbout, MainView::__selector9());
    ::g::Fuse::Reactive::Each* temp33 = ::g::Fuse::Reactive::Each::New4();
    temp33_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp33, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp121 = ::g::Fuse::Reactive::Data::New1(::STRINGS[239/*"dataInfo"*/]);
    ::g::Fuse::Reactive::Each* temp34 = ::g::Fuse::Reactive::Each::New4();
    temp34_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp34, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp122 = ::g::Fuse::Reactive::Data::New1(::STRINGS[240/*"dataContact"*/]);
    ::g::Fuse::Controls::TextInput* temp35 = ::g::Fuse::Controls::TextInput::New3();
    temp35_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp35, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp123 = ::g::Fuse::Reactive::Data::New1(::STRINGS[241/*"email"*/]);
    ::g::Fuse::Controls::TextInput* temp36 = ::g::Fuse::Controls::TextInput::New3();
    temp36_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp36, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp124 = ::g::Fuse::Reactive::Data::New1(::STRINGS[218/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp125 = ::g::Fuse::Reactive::Data::New1(::STRINGS[242/*"signup"*/]);
    ::g::Fuse::iOS::StatusBarConfig* temp126 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp127 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    TheSidebar = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebarProfile = ::g::Fuse::Controls::Panel::New3();
    shadowProfile = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp128 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp129 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], shadow_Color_inst);
    ::g::Fuse::Animations::Change* temp130 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], sidebarFade_Opacity_inst);
    NotInlogged = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp131 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp132 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp133 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp134 = ::g::Paragraph::New4();
    ::g::Fuse::Gestures::Clicked* temp135 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp136 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp137 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp58, __g_nametable1);
    ::g::Fuse::Controls::Rectangle* temp138 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Title* temp139 = ::g::Title::New4();
    ::g::Fuse::Controls::Image* temp140 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp141 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp142 = ::g::Fuse::Controls::Image::New3();
    ::g::SmallText* temp143 = ::g::SmallText::New4();
    ::g::Fuse::Controls::Image* temp144 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp145 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp146 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp147 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    sidebar = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp148 = ::g::Fuse::Controls::Image::New3();
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::StackPanel* temp149 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp150 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp151 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp152 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp153 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp154 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp155 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp156 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp59, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp157 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp158 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp159 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp160 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp161 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp60, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp162 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp163 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp164 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp165 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp166 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp61, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp167 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp168 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp169 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp170 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp171 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp62, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp172 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp173 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp174 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp175 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp176 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp63, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp177 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp178 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp179 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp180 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp181 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp64, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp182 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp183 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp184 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp185 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp186 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp65, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp187 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp188 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp189 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp190 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp191 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp66, __g_nametable1);
    ::g::Fuse::Controls::Rectangle* temp192 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp193 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp194 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp195 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp196 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp197 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp198 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::EdgeNavigator* temp199 = ::g::Fuse::Controls::EdgeNavigator::New4();
    ::g::Fuse::Controls::DockPanel* temp200 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp201 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp202 = ::g::Fuse::Controls::Panel::New3();
    ::g::Hamburger* temp203 = ::g::Hamburger::New5();
    ::g::Fuse::Gestures::Clicked* temp204 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp205 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Profile* temp206 = ::g::Profile::New5();
    ::g::Fuse::Gestures::Clicked* temp207 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp208 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Controls::StackPanel* temp209 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp210 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp211 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], ExhibitorBackground_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp212 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], FilterBackground_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp213 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], FilterPanel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp214 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], ExibitorList_Visibility_inst);
    news = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp215 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp216 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp217 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp218 = ::g::Fuse::Controls::StackPanel::New4();
    logoImage = ::g::Fuse::Controls::Image::New3();
    MainView__Template* temp219 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp220 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp67, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp221 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp222 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp223 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp224 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp225 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp226 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp227 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], NewsDetails_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp228 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], NewsFeed_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp229 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Url_inst, (uObject*)temp68, __g_nametable1, 3);
    TitleTest = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp230 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp70, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp231 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp232 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp233 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp234 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp71, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp235 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp236 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp237 = ::g::Paragraph::New4();
    ::g::Fuse::Gestures::Clicked* temp238 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp239 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], NewsDetails_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp240 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], LectureDetails_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp241 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp72, __g_nametable1);
    ::g::Fuse::Controls::Image* temp242 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp243 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Data_inst, (uObject*)temp73, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp244 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp245 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp246 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp247 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp248 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Url_inst, (uObject*)temp74, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp249 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp250 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp76, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp251 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp252 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp253 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp83, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp254 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp85, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp255 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp256 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp257 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp258 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp86, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp259 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp260 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp261 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp262 = ::g::Paragraph::New4();
    ::g::Fuse::Reactive::DataBinding* temp263 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Data_inst, (uObject*)temp87, __g_nametable1, 3);
    BackgroundImage = ::g::Fuse::Controls::Image::New3();
    partners = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp264 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp265 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Navigation::WhileActive* temp266 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Animations::Change* temp267 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], GaddenLogo_Visibility_inst);
    ::g::Fuse::Animations::Change* temp268 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], PartnerTitle_Visibility_inst);
    ::g::Fuse::Controls::Panel* temp269 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::ScrollView* temp270 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp271 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template1* temp272 = MainView__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp273 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Items_inst, (uObject*)temp88, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp274 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    exhibitor = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp275 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp276 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Navigation::WhileActive* temp277 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Animations::Change* temp278 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], GaddenLogo_Visibility_inst);
    ::g::Fuse::Animations::Change* temp279 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], FilterButton_Visibility_inst);
    ::g::Fuse::Animations::Change* temp280 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], FilterArrow_Visibility_inst);
    ::g::Fuse::Controls::ScrollView* temp281 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp282 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::TextInput* temp283 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::TextInput* temp284 = ::g::Fuse::Controls::TextInput::New3();
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp89, __g_nametable1);
    ::g::Fuse::Controls::Image* temp285 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp286 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp287 = ::g::Fuse::Drawing::Stroke::New2();
    MainView__Template2* temp288 = MainView__Template2::New2(this, this);
    MainView__Template3* temp289 = MainView__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp290 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Items_inst, (uObject*)temp90, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp291 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp292 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp293 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp294 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp295 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp296 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp297 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], ExibitorList_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp298 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], ExhibitorDetails_Visibility_inst);
    ::g::Fuse::Controls::Image* temp299 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp300 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp301 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Url_inst, (uObject*)temp91, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp302 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp303 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Value_inst, (uObject*)temp93, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp304 = ::g::Fuse::Reactive::DataBinding::New1(temp15_Value_inst, (uObject*)temp94, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp305 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp306 = ::g::Fuse::Reactive::DataBinding::New1(temp16_Value_inst, (uObject*)temp95, __g_nametable1, 3);
    ::g::Title* temp307 = ::g::Title::New4();
    ::g::Fuse::Reactive::DataBinding* temp308 = ::g::Fuse::Reactive::DataBinding::New1(temp17_Url_inst, (uObject*)temp96, __g_nametable1, 3);
    ::g::Fuse::Controls::Grid* temp309 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp310 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp311 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::WelcomeText* temp312 = ::g::WelcomeText::New4();
    ::g::Fuse::Controls::Rectangle* temp313 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp314 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::SmallText* temp315 = ::g::SmallText::New4();
    MainView__Template4* temp316 = MainView__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp317 = ::g::Fuse::Reactive::DataBinding::New1(temp18_Items_inst, (uObject*)temp97, __g_nametable1, 3);
    ::g::Fuse::Controls::Grid* temp318 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp319 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp320 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::WelcomeText* temp321 = ::g::WelcomeText::New4();
    ::g::Fuse::Controls::Rectangle* temp322 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp323 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::SmallText* temp324 = ::g::SmallText::New4();
    MainView__Template5* temp325 = MainView__Template5::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp326 = ::g::Fuse::Reactive::DataBinding::New1(temp19_Items_inst, (uObject*)temp98, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp327 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp328 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp329 = ::g::Paragraph::New4();
    ::g::Fuse::Gestures::Clicked* temp330 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp331 = ::g::Fuse::Reactive::DataBinding::New1(temp20_Uri_inst, (uObject*)temp99, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp332 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp333 = ::g::Fuse::Reactive::DataBinding::New1(temp21_Data_inst, (uObject*)temp100, __g_nametable1, 3);
    ::g::Fuse::Controls::ScrollView* temp334 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp335 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp336 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp337 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp338 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp339 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp340 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp341 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp342 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp343 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::Panel* temp344 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp345 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp346 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp347 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp348 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp349 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::Panel* temp350 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp351 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp352 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp353 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp354 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp355 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::Panel* temp356 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp357 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp358 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp359 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp360 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp361 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ActiveJurist = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp362 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleJurist_Color_inst);
    ActiveEkonom = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp363 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleEkonom_Color_inst);
    ActiveMiljovetare = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp364 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleMiljovetare_Color_inst);
    ActiveLogostiker = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp365 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleLogostiker_Color_inst);
    ::g::Fuse::Controls::Rectangle* temp366 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp367 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Text* temp368 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp369 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp370 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp371 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp372 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp373 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp374 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp375 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::Panel* temp376 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp377 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp378 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp379 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp380 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp381 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::Panel* temp382 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp383 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp384 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp385 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp386 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp387 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::Panel* temp388 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp389 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp390 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp391 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp392 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp393 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::Panel* temp394 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp395 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp396 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp397 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp398 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp399 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ActiveSommarjobb = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp400 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleSommarjobb_Color_inst);
    ActiveUppsats = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp401 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleUppsats_Color_inst);
    ActiveInternship = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp402 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleInternship_Color_inst);
    ActiveHeltid = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp403 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleHeltid_Color_inst);
    ActiveExtrajobb = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp404 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleExtrajobb_Color_inst);
    ::g::Fuse::Controls::Rectangle* temp405 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp406 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Text* temp407 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp408 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp409 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp410 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp411 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp412 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp413 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp414 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::Panel* temp415 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp416 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp417 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp418 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp419 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp420 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ActiveKandidat = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp421 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleKandidat_Color_inst);
    ActiveMaster = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp422 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleMaster_Color_inst);
    ::g::Fuse::Controls::Rectangle* temp423 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp424 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Text* temp425 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp426 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp427 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp428 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp429 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp430 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp431 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp432 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::Panel* temp433 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp434 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SmallText* temp435 = ::g::SmallText::New4();
    ::g::Fuse::Drawing::Stroke* temp436 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp437 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp438 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ActiveOnsdag = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp439 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleOnsdag_Color_inst);
    ActiveTorsdag = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp440 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], CircleTorsdag_Color_inst);
    ::g::Fuse::Controls::Rectangle* temp441 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp442 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp443 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp444 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp445 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp446 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], FilterPanel_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp447 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], FilterBackground_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp448 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], ExibitorList_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp449 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], ExhibitorBackground_Visibility_inst);
    program = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp450 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp451 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp452 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp453 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    MainView__Template6* temp454 = MainView__Template6::New2(this, this);
    MainView__Template7* temp455 = MainView__Template7::New2(this, this);
    MainView__Template8* temp456 = MainView__Template8::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp457 = ::g::Fuse::Reactive::DataBinding::New1(temp22_Items_inst, (uObject*)temp101, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp458 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp459 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp460 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp461 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp462 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp463 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp464 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp465 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], ProgramDetails_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp466 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], ProgramFeed_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp467 = ::g::Fuse::Reactive::DataBinding::New1(temp23_Url_inst, (uObject*)temp102, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp468 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp469 = ::g::Fuse::Reactive::DataBinding::New1(temp24_Value_inst, (uObject*)temp104, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp470 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp471 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp472 = ::g::Fuse::Reactive::DataBinding::New1(temp25_Value_inst, (uObject*)temp111, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp473 = ::g::Fuse::Reactive::DataBinding::New1(temp26_Value_inst, (uObject*)temp113, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp474 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp475 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp476 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp477 = ::g::Fuse::Reactive::DataBinding::New1(temp27_Value_inst, (uObject*)temp114, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp478 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp479 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp480 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp481 = ::g::Paragraph::New4();
    ::g::Fuse::Reactive::DataBinding* temp482 = ::g::Fuse::Reactive::DataBinding::New1(temp28_Data_inst, (uObject*)temp115, __g_nametable1, 3);
    icebreaker = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp483 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp484 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    popupBackground = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp485 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp486 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::Actions::DebugAction* temp487 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Controls::Image* temp488 = ::g::Fuse::Controls::Image::New3();
    opacityToggle = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp489 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], popupInfo_Opacity_inst);
    ::g::Fuse::Animations::Change* temp490 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], infoIcon_Opacity_inst);
    ::g::Fuse::Animations::Change* temp491 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], crossIcon_Opacity_inst);
    ::g::Fuse::Controls::Rectangle* temp492 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Paragraph* temp493 = ::g::Paragraph::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp494 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.4f));
    ::g::Fuse::Controls::StackPanel* temp495 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp496 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp497 = ::g::Fuse::Reactive::DataBinding::New1(temp29_Value_inst, (uObject*)temp116, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp498 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp499 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp500 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::TextView* temp501 = ::g::Fuse::Controls::TextView::New3();
    ::g::Paragraph* temp502 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Panel* temp503 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp504 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp505 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp117, __g_nametable1);
    ShowResult = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp506 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], ResultPanel_Opacity_inst);
    ::g::Fuse::Animations::Change* temp507 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], DefaultPanel_Opacity_inst);
    ::g::Fuse::Navigation::WhileActive* temp508 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Animations::Rotate* temp509 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp510 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp511 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp512 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp513 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp514 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp515 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp516 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp517 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp518 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Rotate* temp519 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Animations::Change* temp520 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], IceBreakerIcon_Opacity_inst);
    ::g::Fuse::Animations::Change* temp521 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], IceBreakerButton_Opacity_inst);
    MainView__Template9* temp522 = MainView__Template9::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp523 = ::g::Fuse::Reactive::DataBinding::New1(temp30_Items_inst, (uObject*)temp118, __g_nametable1, 3);
    sponsors = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp524 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp525 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Triggers::LayoutAnimation* temp526 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp527 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp528 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp529 = ::g::Fuse::Controls::Grid::New4();
    SponsorTab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp530 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp531 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp532 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationSponsors_Active_inst);
    GoodiebagTab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp533 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp534 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp535 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationSponsors_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp536 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    sponsor = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp537 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp538 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorSponsor_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::ScrollView* temp539 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Panel* temp540 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp541 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleBig* temp542 = ::g::TitleBig::New4();
    ::g::Fuse::Controls::Rectangle* temp543 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp544 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp545 = ::g::Fuse::Controls::Grid::New4();
    MainView__Template10* temp546 = MainView__Template10::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp547 = ::g::Fuse::Reactive::DataBinding::New1(temp31_Items_inst, (uObject*)temp119, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp548 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp549 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    goodiebag = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp550 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp551 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorSponsor_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::ScrollView* temp552 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp553 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template11* temp554 = MainView__Template11::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp555 = ::g::Fuse::Reactive::DataBinding::New1(temp32_Items_inst, (uObject*)temp120, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp556 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    map = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp557 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp558 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::TabText* temp559 = ::g::TabText::New4();
    ::g::Fuse::Controls::Text* temp560 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp561 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Triggers::LayoutAnimation* temp562 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp563 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp564 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp565 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp566 = ::g::Fuse::Controls::Grid::New4();
    plan3Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp567 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp568 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp569 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControl_Active_inst);
    plan4Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp570 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp571 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp572 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControl_Active_inst);
    plan3 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp573 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp574 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Gestures::Clicked* temp575 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp576 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    MapToggle = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp577 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], popupInfoMap_Opacity_inst);
    ::g::Fuse::Animations::Change* temp578 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], infoIconMap_Opacity_inst);
    ::g::Fuse::Animations::Change* temp579 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], crossIconMap_Opacity_inst);
    ::g::Fuse::Controls::Rectangle* temp580 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp581 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp582 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp583 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp584 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp585 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp586 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp587 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp588 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp589 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp590 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp591 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp592 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp593 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp594 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp595 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp596 = ::g::Paragraph::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp597 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.4f));
    ::g::Fuse::Controls::Image* temp598 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp599 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    plan4 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp600 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp601 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Gestures::Clicked* temp602 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp603 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    MapToggle2 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp604 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], popupInfoMap2_Opacity_inst);
    ::g::Fuse::Animations::Change* temp605 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], infoIconMap2_Opacity_inst);
    ::g::Fuse::Animations::Change* temp606 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], crossIconMap2_Opacity_inst);
    ::g::Fuse::Controls::Rectangle* temp607 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp608 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp609 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp610 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp611 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp612 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp613 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp614 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp615 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp616 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp617 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp618 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp619 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp620 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp621 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp622 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp623 = ::g::Paragraph::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp624 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.4f));
    ::g::Fuse::Controls::Image* temp625 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp626 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    aboutus = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp627 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp628 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp629 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp630 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp631 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Triggers::LayoutAnimation* temp632 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp633 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp634 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp635 = ::g::Fuse::Controls::Grid::New4();
    AboutUsTab = ::g::Fuse::Controls::Panel::New3();
    ::g::AboutAboutUs* temp636 = ::g::AboutAboutUs::New4();
    ::g::Fuse::Gestures::Clicked* temp637 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp638 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControlAbout_Active_inst);
    ProjectTab = ::g::Fuse::Controls::Panel::New3();
    ::g::AboutAboutUs* temp639 = ::g::AboutAboutUs::New4();
    ::g::Fuse::Gestures::Clicked* temp640 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp641 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControlAbout_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp642 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    about = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp643 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp644 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorAbout_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::StackPanel* temp645 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template12* temp646 = MainView__Template12::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp647 = ::g::Fuse::Reactive::DataBinding::New1(temp33_Items_inst, (uObject*)temp121, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp648 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp649 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    project = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp650 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp651 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorAbout_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::StackPanel* temp652 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleBig* temp653 = ::g::TitleBig::New4();
    ::g::Fuse::Controls::Rectangle* temp654 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp655 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp656 = ::g::Fuse::Controls::Grid::New4();
    MainView__Template13* temp657 = MainView__Template13::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp658 = ::g::Fuse::Reactive::DataBinding::New1(temp34_Items_inst, (uObject*)temp122, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp659 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp660 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::Image* temp661 = ::g::Fuse::Controls::Image::New3();
    login = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp662 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp663 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    LoginPage = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp664 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::StackPanel* temp665 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp666 = ::g::Fuse::Reactive::DataBinding::New1(temp35_Value_inst, (uObject*)temp123, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp667 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp668 = ::g::Fuse::Reactive::DataBinding::New1(temp36_Value_inst, (uObject*)temp124, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp669 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp670 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp671 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp672 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb16 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp125, __g_nametable1);
    ::g::Paragraph* temp673 = ::g::Paragraph::New4();
    temp126->Style(1);
    temp127->Code(::STRINGS[243/*"\n\tvar Obs...*/]);
    temp127->LineNumber(4);
    temp127->FileName(::STRINGS[244/*"MainView.ux"*/]);
    uPtr(TheSidebar)->Name(MainView::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TheSidebar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebarProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TheSidebar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TheSidebar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp199);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TheSidebar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp200);
    uPtr(sidebarProfile)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebarProfile)->Margin(::g::Uno::Float4__New2(56.0f, 0.0f, 0.0f, 0.0f));
    uPtr(sidebarProfile)->Name(MainView::__selector11());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebarProfile, 1);
    uPtr(sidebarProfile)->Background(temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebarProfile)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), shadowProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebarProfile)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebarProfile)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), NotInlogged);
    uPtr(shadowProfile)->Angle(180.0f);
    uPtr(shadowProfile)->Distance(8.0f);
    uPtr(shadowProfile)->Size(16.0f);
    uPtr(shadowProfile)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadowProfile)->Name(MainView::__selector12());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp129);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp130);
    ::g::Fuse::Animations::Change__set_Value_fn(temp129, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp130, uCRef(1.0f));
    uPtr(NotInlogged)->Visibility(0);
    uPtr(NotInlogged)->Name(MainView::__selector13());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(NotInlogged)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp131);
    temp131->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    temp132->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp132->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp132->Alignment(6);
    temp132->Margin(::g::Uno::Float4__New2(0.0f, 80.0f, 0.0f, 0.0f));
    temp132->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp132->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp132->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp132->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    temp133->Color(::g::Fuse::Drawing::Colors::White());
    temp133->Width(1.0f);
    temp134->Value(::STRINGS[245/*"LOGGA IN"*/]);
    temp134->FontSize(18.0f);
    temp134->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp136, login);
    temp137->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp138->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp138->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp138->Alignment(10);
    temp138->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp138->SnapToPixels(true);
    temp138->Fill(::g::Fuse::Drawing::Brushes::White());
    temp139->Value(::STRINGS[246/*"STJÄRNMARKE...*/]);
    temp139->Alignment(10);
    temp139->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp140->Width(::g::Uno::UX::Size__New1(10.0f, 1));
    temp140->Alignment(15);
    temp140->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, -10.0f));
    temp140->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon5653a7c5()));
    temp141->Columns(::STRINGS[247/*"2* ,3* ,1*"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp141, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    temp142->StretchMode(6);
    temp142->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp142->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp142->Alignment(13);
    temp142->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImage8740a630()));
    temp143->Value(::STRINGS[248/*"HANDELSBANK...*/]);
    temp143->FontSize(12.0f);
    temp143->Alignment(13);
    temp143->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -5.0f));
    temp144->Width(::g::Uno::UX::Size__New1(10.0f, 1));
    temp144->Alignment(3);
    temp144->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ArrowRightWhite3d207980()));
    temp145->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp145->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp145->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp145->SnapToPixels(true);
    temp145->Fill(temp146);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 56.0f, 0.0f));
    uPtr(sidebar)->Name(MainView::__selector14());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 0);
    uPtr(sidebar)->Background(temp198);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp149);
    uPtr(shadow)->Angle(180.0f);
    uPtr(shadow)->Distance(8.0f);
    uPtr(shadow)->Size(16.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(MainView::__selector15());
    temp148->StretchMode(3);
    temp148->Layer(1);
    temp148->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MenuBackground54de29a9()));
    uPtr(router)->Name(MainView::__selector16());
    temp149->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp157);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp162);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp167);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp172);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp177);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp182);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp187);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp192);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp194);
    temp150->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 40.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp151);
    temp151->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp151->Alignment(7);
    temp151->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhite2f420aa9()));
    temp152->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp153);
    temp153->Text(::STRINGS[249/*"NYHETER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp155, news);
    temp156->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    temp157->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp158);
    temp158->Text(::STRINGS[250/*"PARTNERS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp159);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp160);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp161);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp160, partners);
    temp161->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp162->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    temp163->Text(::STRINGS[251/*"UTSTÄLLARE"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp164);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp166);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp165, exhibitor);
    temp166->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp167->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp168);
    temp168->Text(::STRINGS[252/*"PROGRAM"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp168->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp169);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp169->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp170);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp169->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp171);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp169->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp170, program);
    temp171->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    temp172->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp173);
    temp173->Text(::STRINGS[253/*"ICE BREAKER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp174);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp175);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp176);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp175, icebreaker);
    temp176->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    temp177->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp178);
    temp178->Text(::STRINGS[254/*"SPONSORER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp178->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp179);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp179->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp180);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp179->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp181);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp179->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp180, sponsors);
    temp181->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp182->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp182->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp183);
    temp183->Text(::STRINGS[255/*"KARTA"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp184);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp185);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp186);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp185, map);
    temp186->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    temp187->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp187->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp188);
    temp188->Text(::STRINGS[256/*"OM OSS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp189);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp189->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp190);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp189->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp191);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp189->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp190, aboutus);
    temp191->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    temp192->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp192->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp192->Alignment(3);
    temp192->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 20.0f, 0.0f));
    temp192->SnapToPixels(true);
    temp192->Fill(temp193);
    temp194->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp194->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 20.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp195);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp196);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp197);
    temp195->Width(::g::Uno::UX::Size__New1(30.0f, 4));
    temp195->Alignment(7);
    temp195->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HandelsbankenLogotypeWhite2b3c3eec()));
    temp196->Width(::g::Uno::UX::Size__New1(10.0f, 4));
    temp196->Alignment(11);
    temp196->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ErnstYoungLogotypeWhite743b8602()));
    temp197->Width(::g::Uno::UX::Size__New1(30.0f, 4));
    temp197->Alignment(15);
    temp197->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HHGSLogotypWhitea19945a1()));
    temp200->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp200->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp201);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp200->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    temp201->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp201->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp201, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp202);
    temp202->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp203);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp206);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), GaddenLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp209);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), PartnerTitle);
    temp203->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp203->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp204);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp205);
    temp205->Target(sidebar);
    uPtr(sidebarFade)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3333333f));
    uPtr(sidebarFade)->HitTestMode(0);
    uPtr(sidebarFade)->Opacity(0.0f);
    uPtr(sidebarFade)->Layer(3);
    uPtr(sidebarFade)->Name(MainView::__selector17());
    temp206->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp207);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp208);
    temp208->Target(sidebarProfile);
    uPtr(GaddenLogo)->Width(::g::Uno::UX::Size__New1(20.0f, 4));
    uPtr(GaddenLogo)->Alignment(10);
    uPtr(GaddenLogo)->Opacity(1.0f);
    uPtr(GaddenLogo)->Name(MainView::__selector18());
    uPtr(GaddenLogo)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeSmallWhite67f0bde0()));
    temp209->Orientation(0);
    temp209->ItemSpacing(10.0f);
    temp209->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    temp209->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp209->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), FilterButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp209->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), FilterArrow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp209->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp210);
    uPtr(FilterButton)->Value(::STRINGS[257/*"FILTRERA"*/]);
    uPtr(FilterButton)->FontSize(15.0f);
    uPtr(FilterButton)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(FilterButton)->Alignment(10);
    uPtr(FilterButton)->Visibility(2);
    uPtr(FilterButton)->Name(MainView::__selector19());
    uPtr(FilterButton)->Font(MainView::RalewayBlack());
    uPtr(FilterArrow)->Width(::g::Uno::UX::Size__New1(15.0f, 1));
    uPtr(FilterArrow)->Alignment(3);
    uPtr(FilterArrow)->Visibility(2);
    uPtr(FilterArrow)->Name(MainView::__selector20());
    uPtr(FilterArrow)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ArrowDownWhited96db7ae()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp210->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp211);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp210->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp212);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp210->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp213);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp210->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp214);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp211, uCRef<int>(2));
    temp211->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp212, uCRef<int>(0));
    temp212->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp213, uCRef<int>(0));
    temp213->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp214, uCRef<int>(2));
    temp214->Delay(0.2f);
    uPtr(PartnerTitle)->Value(::STRINGS[250/*"PARTNERS"*/]);
    uPtr(PartnerTitle)->FontSize(15.0f);
    uPtr(PartnerTitle)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(PartnerTitle)->Alignment(10);
    uPtr(PartnerTitle)->Visibility(2);
    uPtr(PartnerTitle)->Name(MainView::__selector21());
    uPtr(PartnerTitle)->Font(MainView::RalewayBlack());
    uPtr(navigation)->Name(MainView::__selector22());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), news);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), partners);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), exhibitor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), program);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), icebreaker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), sponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), map);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), aboutus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), login);
    uPtr(news)->Name(MainView::__selector23());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(news)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp215);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp216);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), NewsFeed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), NewsDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), LectureDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), BackgroundImage);
    temp216->LineNumber(2);
    temp216->FileName(::STRINGS[258/*"Pages/News/...*/]);
    temp216->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsPage68651a27()));
    uPtr(NewsFeed)->Visibility(0);
    uPtr(NewsFeed)->Name(MainView::__selector24());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(NewsFeed)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp217);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp217->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp218);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp218->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), logoImage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp218->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    uPtr(logoImage)->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(logoImage)->Alignment(6);
    uPtr(logoImage)->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(logoImage)->Name(MainView::__selector25());
    uPtr(logoImage)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhite2f420aa9()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp219);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp220);
    uPtr(NewsDetails)->Visibility(2);
    uPtr(NewsDetails)->Name(MainView::__selector26());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(NewsDetails)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp221);
    temp221->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp221->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp221->ZOffset(1.0f);
    temp221->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp222);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp222->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp223);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp223->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp224);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), TitleTest);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp231);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp233);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp235);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp242);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp243);
    temp224->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp224->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp225);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp224->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp225->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    temp225->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp225->Alignment(7);
    temp225->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp225->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon5653a7c5()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp225->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp226);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp226->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp227);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp226->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp228);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp227, uCRef<int>(2));
    temp227->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp228, uCRef<int>(0));
    temp228->Delay(0.2f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp229);
    uPtr(TitleTest)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(TitleTest)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(TitleTest)->Alignment(13);
    uPtr(TitleTest)->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    uPtr(TitleTest)->Name(MainView::__selector27());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TitleTest)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->LineSpacing(10.0f);
    temp2->FontSize(28.0f);
    temp2->TextAlignment(0);
    temp2->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp230);
    temp231->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp231->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp231->Alignment(5);
    temp231->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    temp231->SnapToPixels(true);
    temp231->Fill(temp232);
    temp233->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp233->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp234);
    temp235->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp235->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp235->Alignment(10);
    temp235->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp235->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp236);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp237);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp238);
    temp236->Color(::g::Fuse::Drawing::Colors::White());
    temp236->Width(2.0f);
    temp237->Value(::STRINGS[259/*"GÅ TILL EVENT"*/]);
    temp237->FontSize(18.0f);
    temp237->IsReadOnly(true);
    temp237->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp238->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp239);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp238->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp240);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp238->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp241);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp238->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb10);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp239, uCRef<int>(2));
    temp239->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp240, uCRef<int>(0));
    temp240->Delay(0.2f);
    temp241->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    temp242->StretchMode(6);
    temp242->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp242->Alignment(14);
    temp242->Margin(::g::Uno::Float4__New2(0.0f, -60.0f, 0.0f, 0.0f));
    temp242->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundNewsDetails819ed1f3()));
    uPtr(LectureDetails)->Visibility(2);
    uPtr(LectureDetails)->Name(MainView::__selector28());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(LectureDetails)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp244);
    temp244->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp244->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp244->ZOffset(1.0f);
    temp244->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp244->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp245);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp245->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp246);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp246->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp247);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp249);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp251);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp255);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp257);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp259);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp263);
    temp247->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp247->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp248);
    temp249->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp249->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp249->Alignment(13);
    temp249->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp249->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->LineSpacing(10.0f);
    temp6->FontSize(28.0f);
    temp6->TextAlignment(0);
    temp6->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp6->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp250);
    temp251->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp251->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp252);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp252->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp252->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp7->FontSize(18.0f);
    temp7->Color(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp253);
    temp8->FontSize(12.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp254);
    temp255->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp255->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp255->Alignment(1);
    temp255->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp255->SnapToPixels(true);
    temp255->Fill(temp256);
    temp257->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp257->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp258);
    temp259->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp259->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp260);
    temp260->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp260->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp260->Alignment(10);
    temp260->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp260->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp260->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp261);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp260->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp262);
    temp261->Color(::g::Fuse::Drawing::Colors::White());
    temp261->Width(1.0f);
    temp262->Value(::STRINGS[260/*"BOKA FÖRELÄ...*/]);
    temp262->FontSize(16.0f);
    temp262->Alignment(10);
    uPtr(BackgroundImage)->StretchMode(6);
    uPtr(BackgroundImage)->Alignment(10);
    uPtr(BackgroundImage)->Opacity(1.0f);
    uPtr(BackgroundImage)->Name(MainView::__selector29());
    uPtr(BackgroundImage)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundAbstractPaintaf87a254()));
    uPtr(partners)->Name(MainView::__selector30());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(partners)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp264);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp264->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp265);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp264->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp266);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp264->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp269);
    temp265->LineNumber(2);
    temp265->FileName(::STRINGS[261/*"Pages/Partn...*/]);
    temp265->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::PartnersPage388f10bf()));
    temp266->Threshold(0.1f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp266->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp267);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp266->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp268);
    ::g::Fuse::Animations::Change__set_Value_fn(temp267, uCRef<int>(2));
    ::g::Fuse::Animations::Change__set_Value_fn(temp268, uCRef<int>(0));
    temp269->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp269->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp269->Background(temp274);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp269->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp270);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp270->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp271);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp271->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp272);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp273);
    uPtr(exhibitor)->Name(MainView::__selector31());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(exhibitor)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp275);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp276);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp277);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ExibitorList);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ExhibitorDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), FilterPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ExhibitorBackground);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), FilterBackground);
    temp276->LineNumber(2);
    temp276->FileName(::STRINGS[262/*"Pages/Exhib...*/]);
    temp276->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ExhibitorPage06d66bc7()));
    temp277->Threshold(0.1f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp277->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp278);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp277->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp279);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp277->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp280);
    ::g::Fuse::Animations::Change__set_Value_fn(temp278, uCRef<int>(2));
    ::g::Fuse::Animations::Change__set_Value_fn(temp279, uCRef<int>(0));
    ::g::Fuse::Animations::Change__set_Value_fn(temp280, uCRef<int>(0));
    uPtr(ExibitorList)->Visibility(0);
    uPtr(ExibitorList)->Name(MainView::__selector32());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ExibitorList)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp281);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp281->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp282);
    temp282->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp282->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp283);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp282->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp283->PlaceholderText(::STRINGS[263/*"Sök utställ...*/]);
    temp283->PlaceholderColor(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp283->TextAlignment(1);
    temp283->TextColor(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    temp283->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp283->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp283->Alignment(6);
    temp283->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    temp283->Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp283->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp284);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp283->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp285);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp283->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp286);
    temp284->add_ActionTriggered(uDelegate::New(::TYPES[14/*Fuse.Controls.TextInputActionHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb11);
    temp285->StretchMode(6);
    temp285->Height(::g::Uno::UX::Size__New1(13.0f, 1));
    temp285->Alignment(10);
    temp285->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 120.0f, 0.0f));
    temp285->Layer(1);
    temp285->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::SearchGrey4f0b9e6f()));
    temp286->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp286->Layer(1);
    temp286->Fill(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp286->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp287);
    temp287->Color(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp287->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp288);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp289);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp290);
    uPtr(ExhibitorDetails)->Visibility(2);
    uPtr(ExhibitorDetails)->Name(MainView::__selector33());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ExhibitorDetails)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp291);
    temp291->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp291->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp291->ZOffset(3.0f);
    temp291->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp291->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp292);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp292->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp293);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp293->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp294);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp300);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp302);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp305);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp307);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp309);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp315);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp318);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp324);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp327);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp332);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp333);
    temp294->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp294->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp295);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp294->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp299);
    temp295->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    temp295->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp295->Alignment(7);
    temp295->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp295->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon5653a7c5()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp295->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp296);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp296->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp297);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp296->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp298);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp297, uCRef<int>(0));
    temp297->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp298, uCRef<int>(2));
    temp298->Delay(0.2f);
    temp299->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp299->Alignment(6);
    temp299->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImage8740a630()));
    temp300->MaxHeight(::g::Uno::UX::Size__New1(60.0f, 1));
    temp300->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp300->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp301);
    temp302->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp302->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp302->Alignment(13);
    temp302->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp302->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp14->LineSpacing(10.0f);
    temp14->FontSize(28.0f);
    temp14->TextAlignment(0);
    temp14->Color(::g::Fuse::Drawing::Colors::White());
    temp14->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp14->Font(MainView::Raleway());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp303);
    temp15->FontSize(16.0f);
    temp15->Color(::g::Fuse::Drawing::Colors::Gray());
    temp15->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    temp15->Font(MainView::Raleway());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp304);
    temp305->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp305->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp306);
    temp307->Value(::STRINGS[264/*"HÄR FINNS VI"*/]);
    temp307->Alignment(10);
    temp17->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp17->Alignment(10);
    temp17->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp308);
    temp309->Columns(::STRINGS[265/*"1* ,1.5*, 1*"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp309, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp310);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp312);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp313);
    temp310->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp310->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp310->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 0.0f));
    temp310->SnapToPixels(true);
    temp310->Fill(temp311);
    temp312->Value(::STRINGS[266/*"VI ERBJUDER"*/]);
    temp312->Color(::g::Fuse::Drawing::Colors::White());
    temp312->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp312->Alignment(10);
    temp312->Margin(::g::Uno::Float4__New2(13.0f, 20.0f, 0.0f, 0.0f));
    temp313->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp313->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp313->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 0.0f));
    temp313->SnapToPixels(true);
    temp313->Fill(temp314);
    temp315->Value(::STRINGS[267/*"TYP AV JOBB"*/]);
    temp315->Alignment(10);
    temp315->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp315->Font(MainView::RalewayBlack());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp316);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp317);
    temp318->Columns(::STRINGS[265/*"1* ,1.5*, 1*"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp318, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp318->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp319);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp318->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp321);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp318->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp322);
    temp319->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp319->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp319->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 0.0f));
    temp319->SnapToPixels(true);
    temp319->Fill(temp320);
    temp321->Value(::STRINGS[268/*"VI SÖKER"*/]);
    temp321->Color(::g::Fuse::Drawing::Colors::White());
    temp321->Alignment(10);
    temp321->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp322->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp322->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp322->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 0.0f));
    temp322->SnapToPixels(true);
    temp322->Fill(temp323);
    temp324->Value(::STRINGS[269/*"TYP AV UTBI...*/]);
    temp324->Alignment(10);
    temp324->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp324->Font(MainView::RalewayBlack());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp325);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp326);
    temp327->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp327->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp327->Alignment(10);
    temp327->Margin(::g::Uno::Float4__New2(20.0f, 30.0f, 0.0f, 0.0f));
    temp327->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp327->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp328);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp327->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp329);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp327->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp330);
    temp328->Color(::g::Fuse::Drawing::Colors::White());
    temp328->Width(2.0f);
    temp329->Value(::STRINGS[270/*"BESÖK WEBBP...*/]);
    temp329->FontSize(18.0f);
    temp329->IsReadOnly(true);
    temp329->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp330->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp330->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp331);
    temp332->StretchMode(6);
    temp332->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp332->Alignment(14);
    temp332->Margin(::g::Uno::Float4__New2(0.0f, -60.0f, 0.0f, 0.0f));
    temp332->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundNewsDetails819ed1f3()));
    uPtr(FilterPanel)->Visibility(2);
    uPtr(FilterPanel)->Name(MainView::__selector34());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FilterPanel)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp334);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp334->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp335);
    temp335->Margin(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp336);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp337);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveJurist);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveEkonom);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveMiljovetare);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveLogostiker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp366);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp368);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp369);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveSommarjobb);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveUppsats);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveInternship);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveHeltid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveExtrajobb);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp405);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp407);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp408);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveKandidat);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveMaster);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp423);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp425);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp426);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveOnsdag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ActiveTorsdag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp441);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp443);
    temp336->Value(::STRINGS[269/*"TYP AV UTBI...*/]);
    temp336->FontSize(16.0f);
    temp336->Color(::g::Fuse::Drawing::Colors::White());
    temp336->Font(MainView::RalewayBlack());
    temp337->ColumnCount(3);
    ::g::Fuse::Controls::Grid::SetRow(temp337, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp337->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp338);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp337->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp344);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp337->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp350);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp337->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp356);
    temp338->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp338->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp339);
    temp339->ItemSpacing(10.0f);
    temp339->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp339->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp340);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp339->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleEkonom);
    temp340->Value(::STRINGS[271/*"EKONOM"*/]);
    temp340->FontSize(10.0f);
    uPtr(CircleEkonom)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleEkonom)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleEkonom)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleEkonom)->Name(MainView::__selector35());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleEkonom)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp341);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleEkonom)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp342);
    temp341->Color(::g::Fuse::Drawing::Colors::Black());
    temp341->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp342->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp343);
    temp343->Target((uObject*)ActiveEkonom);
    temp344->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp344->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp345);
    temp345->ItemSpacing(10.0f);
    temp345->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp345->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp346);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp345->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleMiljovetare);
    temp346->Value(::STRINGS[272/*"MILJÖVETARE"*/]);
    temp346->FontSize(10.0f);
    uPtr(CircleMiljovetare)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(CircleMiljovetare)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleMiljovetare)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleMiljovetare)->Name(MainView::__selector36());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleMiljovetare)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp347);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleMiljovetare)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp348);
    temp347->Color(::g::Fuse::Drawing::Colors::Black());
    temp347->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp348->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp349);
    temp349->Target((uObject*)ActiveMiljovetare);
    temp350->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp350->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp351);
    temp351->ItemSpacing(10.0f);
    temp351->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp351->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp352);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp351->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleJurist);
    temp352->Value(::STRINGS[273/*"JURIST"*/]);
    temp352->FontSize(10.0f);
    uPtr(CircleJurist)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(CircleJurist)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleJurist)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleJurist)->Name(MainView::__selector37());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleJurist)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp353);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleJurist)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp354);
    temp353->Color(::g::Fuse::Drawing::Colors::Black());
    temp353->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp354->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp355);
    temp355->Target((uObject*)ActiveJurist);
    temp356->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp356->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp357);
    temp357->ItemSpacing(10.0f);
    temp357->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp357->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp358);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp357->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleLogostiker);
    temp358->Value(::STRINGS[274/*"LOGISTIKER"*/]);
    temp358->FontSize(10.0f);
    uPtr(CircleLogostiker)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(CircleLogostiker)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleLogostiker)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleLogostiker)->Name(MainView::__selector38());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleLogostiker)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp359);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleLogostiker)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp360);
    temp359->Color(::g::Fuse::Drawing::Colors::Black());
    temp359->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp360->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp361);
    temp361->Target((uObject*)ActiveLogostiker);
    uPtr(ActiveJurist)->Name(MainView::__selector39());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveJurist)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp362);
    ::g::Fuse::Animations::Change__set_Value_fn(temp362, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp362->Duration(0.3);
    uPtr(ActiveEkonom)->Name(MainView::__selector40());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveEkonom)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp363);
    ::g::Fuse::Animations::Change__set_Value_fn(temp363, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp363->Duration(0.3);
    uPtr(ActiveMiljovetare)->Name(MainView::__selector41());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveMiljovetare)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp364);
    ::g::Fuse::Animations::Change__set_Value_fn(temp364, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp364->Duration(0.3);
    uPtr(ActiveLogostiker)->Name(MainView::__selector42());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveLogostiker)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp365);
    ::g::Fuse::Animations::Change__set_Value_fn(temp365, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp365->Duration(0.3);
    temp366->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp366->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp366->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp366->SnapToPixels(true);
    temp366->Fill(temp367);
    temp368->Value(::STRINGS[267/*"TYP AV JOBB"*/]);
    temp368->FontSize(16.0f);
    temp368->Color(::g::Fuse::Drawing::Colors::White());
    temp368->Font(MainView::RalewayBlack());
    temp369->ColumnCount(3);
    ::g::Fuse::Controls::Grid::SetRow(temp369, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp369->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp370);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp369->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp376);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp369->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp382);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp369->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp388);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp369->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp394);
    temp370->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp370->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp371);
    temp371->ItemSpacing(10.0f);
    temp371->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp371->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp372);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp371->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleSommarjobb);
    temp372->Value(::STRINGS[275/*"SOMMARJOBB"*/]);
    temp372->FontSize(10.0f);
    uPtr(CircleSommarjobb)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleSommarjobb)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleSommarjobb)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleSommarjobb)->Name(MainView::__selector43());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleSommarjobb)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp373);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleSommarjobb)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp374);
    temp373->Color(::g::Fuse::Drawing::Colors::Black());
    temp373->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp374->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp375);
    temp375->Target((uObject*)ActiveSommarjobb);
    temp376->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp376->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp377);
    temp377->ItemSpacing(10.0f);
    temp377->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp377->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp378);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp377->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleUppsats);
    temp378->Value(::STRINGS[276/*"UPPSATS"*/]);
    temp378->FontSize(10.0f);
    uPtr(CircleUppsats)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleUppsats)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleUppsats)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleUppsats)->Name(MainView::__selector44());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleUppsats)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp379);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleUppsats)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp380);
    temp379->Color(::g::Fuse::Drawing::Colors::Black());
    temp379->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp380->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp381);
    temp381->Target((uObject*)ActiveUppsats);
    temp382->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp382->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp383);
    temp383->ItemSpacing(10.0f);
    temp383->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp383->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp384);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp383->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleInternship);
    temp384->Value(::STRINGS[277/*"INTERNSHIP"*/]);
    temp384->FontSize(10.0f);
    uPtr(CircleInternship)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleInternship)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleInternship)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleInternship)->Name(MainView::__selector45());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleInternship)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp385);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleInternship)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp386);
    temp385->Color(::g::Fuse::Drawing::Colors::Black());
    temp385->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp386->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp387);
    temp387->Target((uObject*)ActiveInternship);
    temp388->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp388->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp389);
    temp389->ItemSpacing(10.0f);
    temp389->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp389->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp390);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp389->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleHeltid);
    temp390->Value(::STRINGS[278/*"HELTID"*/]);
    temp390->FontSize(10.0f);
    uPtr(CircleHeltid)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleHeltid)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleHeltid)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleHeltid)->Name(MainView::__selector46());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleHeltid)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp391);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleHeltid)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp392);
    temp391->Color(::g::Fuse::Drawing::Colors::Black());
    temp391->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp392->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp393);
    temp393->Target((uObject*)ActiveHeltid);
    temp394->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp394->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp395);
    temp395->ItemSpacing(10.0f);
    temp395->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp395->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp396);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp395->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleExtrajobb);
    temp396->Value(::STRINGS[279/*"EXTRAJOBB"*/]);
    temp396->FontSize(10.0f);
    uPtr(CircleExtrajobb)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleExtrajobb)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleExtrajobb)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleExtrajobb)->Name(MainView::__selector47());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleExtrajobb)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp397);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleExtrajobb)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp398);
    temp397->Color(::g::Fuse::Drawing::Colors::Black());
    temp397->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp398->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp399);
    temp399->Target((uObject*)ActiveExtrajobb);
    uPtr(ActiveSommarjobb)->Name(MainView::__selector48());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveSommarjobb)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp400);
    ::g::Fuse::Animations::Change__set_Value_fn(temp400, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp400->Duration(0.3);
    uPtr(ActiveUppsats)->Name(MainView::__selector49());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveUppsats)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp401);
    ::g::Fuse::Animations::Change__set_Value_fn(temp401, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp401->Duration(0.3);
    uPtr(ActiveInternship)->Name(MainView::__selector50());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveInternship)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp402);
    ::g::Fuse::Animations::Change__set_Value_fn(temp402, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp402->Duration(0.3);
    uPtr(ActiveHeltid)->Name(MainView::__selector51());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveHeltid)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp403);
    ::g::Fuse::Animations::Change__set_Value_fn(temp403, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp403->Duration(0.3);
    uPtr(ActiveExtrajobb)->Name(MainView::__selector52());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveExtrajobb)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp404);
    ::g::Fuse::Animations::Change__set_Value_fn(temp404, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp404->Duration(0.3);
    temp405->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp405->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp405->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp405->SnapToPixels(true);
    temp405->Fill(temp406);
    temp407->Value(::STRINGS[280/*"TYP AV EXAMEN"*/]);
    temp407->FontSize(16.0f);
    temp407->Color(::g::Fuse::Drawing::Colors::White());
    temp407->Font(MainView::RalewayBlack());
    temp408->ColumnCount(3);
    ::g::Fuse::Controls::Grid::SetRow(temp408, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp408->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp409);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp408->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp415);
    temp409->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp409->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp410);
    temp410->ItemSpacing(10.0f);
    temp410->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp410->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp411);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp410->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleKandidat);
    temp411->Value(::STRINGS[281/*"KANDIDAT"*/]);
    temp411->FontSize(10.0f);
    uPtr(CircleKandidat)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleKandidat)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleKandidat)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleKandidat)->Name(MainView::__selector53());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleKandidat)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp412);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleKandidat)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp413);
    temp412->Color(::g::Fuse::Drawing::Colors::Black());
    temp412->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp413->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp414);
    temp414->Target((uObject*)ActiveKandidat);
    temp415->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp415->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp416);
    temp416->ItemSpacing(10.0f);
    temp416->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp416->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp417);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp416->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleMaster);
    temp417->Value(::STRINGS[282/*"MASTER"*/]);
    temp417->FontSize(10.0f);
    uPtr(CircleMaster)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleMaster)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleMaster)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleMaster)->Name(MainView::__selector54());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleMaster)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp418);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleMaster)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp419);
    temp418->Color(::g::Fuse::Drawing::Colors::Black());
    temp418->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp419->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp420);
    temp420->Target((uObject*)ActiveMaster);
    uPtr(ActiveKandidat)->Name(MainView::__selector55());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveKandidat)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp421);
    ::g::Fuse::Animations::Change__set_Value_fn(temp421, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp421->Duration(0.3);
    uPtr(ActiveMaster)->Name(MainView::__selector56());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveMaster)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp422);
    ::g::Fuse::Animations::Change__set_Value_fn(temp422, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp422->Duration(0.3);
    temp423->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp423->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp423->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp423->SnapToPixels(true);
    temp423->Fill(temp424);
    temp425->Value(::STRINGS[283/*"VILKEN DAG(...*/]);
    temp425->FontSize(16.0f);
    temp425->Color(::g::Fuse::Drawing::Colors::White());
    temp425->Font(MainView::RalewayBlack());
    temp426->ColumnCount(3);
    ::g::Fuse::Controls::Grid::SetRow(temp426, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp426->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp427);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp426->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp433);
    temp427->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp427->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp428);
    temp428->ItemSpacing(10.0f);
    temp428->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp428->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp429);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp428->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleOnsdag);
    temp429->Value(::STRINGS[284/*"ONSDAG 8/11"*/]);
    temp429->FontSize(10.0f);
    uPtr(CircleOnsdag)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleOnsdag)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleOnsdag)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleOnsdag)->Name(MainView::__selector57());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleOnsdag)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp430);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleOnsdag)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp431);
    temp430->Color(::g::Fuse::Drawing::Colors::Black());
    temp430->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp431->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp432);
    temp432->Target((uObject*)ActiveOnsdag);
    temp433->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp433->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp434);
    temp434->ItemSpacing(10.0f);
    temp434->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp434->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp435);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp434->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), CircleTorsdag);
    temp435->Value(::STRINGS[285/*"TORSDAG 9/11"*/]);
    temp435->FontSize(10.0f);
    uPtr(CircleTorsdag)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CircleTorsdag)->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleTorsdag)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(CircleTorsdag)->Name(MainView::__selector58());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleTorsdag)->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp436);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CircleTorsdag)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp437);
    temp436->Color(::g::Fuse::Drawing::Colors::Black());
    temp436->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp437->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp438);
    temp438->Target((uObject*)ActiveTorsdag);
    uPtr(ActiveOnsdag)->Name(MainView::__selector59());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveOnsdag)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp439);
    ::g::Fuse::Animations::Change__set_Value_fn(temp439, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp439->Duration(0.3);
    uPtr(ActiveTorsdag)->Name(MainView::__selector60());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ActiveTorsdag)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp440);
    ::g::Fuse::Animations::Change__set_Value_fn(temp440, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp440->Duration(0.3);
    temp441->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp441->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp441->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp441->SnapToPixels(true);
    temp441->Fill(temp442);
    temp443->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp443->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp443->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    temp443->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp443->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp444);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp443->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp445);
    temp444->Value(::STRINGS[257/*"FILTRERA"*/]);
    temp444->Color(::g::Fuse::Drawing::Colors::White());
    temp444->Alignment(10);
    temp444->Font(MainView::RalewayBlack());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp445->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp446);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp445->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp447);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp445->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp448);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp445->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp449);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp446, uCRef<int>(2));
    temp446->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp447, uCRef<int>(2));
    temp447->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp448, uCRef<int>(0));
    temp448->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp449, uCRef<int>(0));
    temp449->Delay(0.2f);
    uPtr(ExhibitorBackground)->StretchMode(3);
    uPtr(ExhibitorBackground)->Visibility(0);
    uPtr(ExhibitorBackground)->Layer(1);
    uPtr(ExhibitorBackground)->Name(MainView::__selector61());
    uPtr(ExhibitorBackground)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundExhibitor9cd57b8a()));
    uPtr(FilterBackground)->StretchMode(3);
    uPtr(FilterBackground)->Visibility(2);
    uPtr(FilterBackground)->Layer(1);
    uPtr(FilterBackground)->Name(MainView::__selector62());
    uPtr(FilterBackground)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundFilter403b162a()));
    uPtr(program)->Name(MainView::__selector63());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(program)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp450);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp450->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp451);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp450->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ProgramFeed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp450->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ProgramDetails);
    temp451->LineNumber(2);
    temp451->FileName(::STRINGS[286/*"Pages/Progr...*/]);
    temp451->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ProgramPagef5f399e7()));
    uPtr(ProgramFeed)->Visibility(0);
    uPtr(ProgramFeed)->Name(MainView::__selector64());
    uPtr(ProgramFeed)->Background(temp458);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ProgramFeed)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp452);
    temp452->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp452->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp453);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp452->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp453->LineNumber(7);
    temp453->FileName(::STRINGS[286/*"Pages/Progr...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp454);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp455);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp456);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp457);
    uPtr(ProgramDetails)->Visibility(0);
    uPtr(ProgramDetails)->Name(MainView::__selector65());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ProgramDetails)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp459);
    temp459->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp459->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp459->ZOffset(1.0f);
    temp459->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp459->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp460);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp460->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp461);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp461->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp462);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp468);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp470);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp474);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp476);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Nodes()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp478);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp482);
    temp462->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp462->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp463);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp462->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp463->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    temp463->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp463->Alignment(7);
    temp463->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp463->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon5653a7c5()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp463->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp464);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp464->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp465);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp464->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp466);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp465, uCRef<int>(2));
    temp465->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp466, uCRef<int>(0));
    temp466->Delay(0.2f);
    temp23->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp23->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp467);
    temp468->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp468->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp468->Alignment(13);
    temp468->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp468->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp24->LineSpacing(10.0f);
    temp24->FontSize(28.0f);
    temp24->TextAlignment(0);
    temp24->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp24->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp469);
    temp470->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp470->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp471);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp471->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp471->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp25->FontSize(18.0f);
    temp25->Color(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp25->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp472);
    temp26->FontSize(12.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp473);
    temp474->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp474->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp474->Alignment(1);
    temp474->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp474->SnapToPixels(true);
    temp474->Fill(temp475);
    temp476->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp476->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp477);
    temp478->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp478->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp479);
    temp479->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp479->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp479->Alignment(10);
    temp479->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp479->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp479->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp480);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp479->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp481);
    temp480->Color(::g::Fuse::Drawing::Colors::White());
    temp480->Width(1.0f);
    temp481->Value(::STRINGS[260/*"BOKA FÖRELÄ...*/]);
    temp481->FontSize(16.0f);
    temp481->Alignment(10);
    uPtr(icebreaker)->Name(MainView::__selector66());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(icebreaker)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp483);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp483->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp484);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp483->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), popupBackground);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp483->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp503);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp483->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp484->LineNumber(2);
    temp484->FileName(::STRINGS[287/*"Pages/IceBr...*/]);
    temp484->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::IceBreakersPagefe52e227()));
    uPtr(popupBackground)->Height(::g::Uno::UX::Size__New1(70.0f, 4));
    uPtr(popupBackground)->Alignment(4);
    uPtr(popupBackground)->Opacity(1.0f);
    uPtr(popupBackground)->Name(MainView::__selector67());
    uPtr(popupBackground)->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), infoIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), crossIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp488);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), opacityToggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), popupInfo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ResultPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), DefaultPanel);
    uPtr(infoIcon)->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIcon)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIcon)->Alignment(7);
    uPtr(infoIcon)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(infoIcon)->Opacity(1.0f);
    uPtr(infoIcon)->Name(MainView::__selector68());
    uPtr(infoIcon)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoIconWhite2f2ec674()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoIcon)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp485);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp485->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp486);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp485->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp487);
    temp486->Target((uObject*)opacityToggle);
    temp487->Message(::STRINGS[288/*"clicked"*/]);
    uPtr(crossIcon)->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIcon)->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIcon)->Alignment(7);
    uPtr(crossIcon)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(crossIcon)->Opacity(0.0f);
    uPtr(crossIcon)->Name(MainView::__selector69());
    uPtr(crossIcon)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon5653a7c5()));
    temp488->Alignment(6);
    temp488->Layer(1);
    temp488->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundIceBreaker4fd1a959()));
    uPtr(opacityToggle)->Name(MainView::__selector70());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityToggle)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp489);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityToggle)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp490);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityToggle)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp491);
    ::g::Fuse::Animations::Change__set_Value_fn(temp489, uCRef(1.0f));
    temp489->Duration(0.3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp490, uCRef(0.0f));
    temp490->Duration(0.3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp491, uCRef(1.0f));
    temp491->Duration(0.3);
    uPtr(popupInfo)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfo)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfo)->Opacity(0.0f);
    uPtr(popupInfo)->Name(MainView::__selector71());
    uPtr(popupInfo)->Background(temp494);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupInfo)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp492);
    temp492->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp492->Color(::g::Fuse::Drawing::Colors::White());
    temp492->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp492->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    temp492->Alignment(6);
    temp492->Margin(::g::Uno::Float4__New2(20.0f, 60.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp492->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp493);
    temp493->Value(::STRINGS[289/*"Gadden har ...*/]);
    temp493->TextAlignment(1);
    temp493->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp493->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp493->Alignment(6);
    temp493->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(ResultPanel)->Opacity(0.0f);
    uPtr(ResultPanel)->Name(MainView::__selector72());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ResultPanel)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp495);
    temp495->Alignment(14);
    temp495->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp495->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp496);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp495->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp495->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp498);
    temp496->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp496->Alignment(10);
    temp496->Margin(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp496->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::IceBreakerQuote6d2bd1b5()));
    temp29->TextWrapping(1);
    temp29->LineSpacing(10.0f);
    temp29->FontSize(20.0f);
    temp29->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->Font(MainView::TitleFont());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp497);
    temp498->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    temp498->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp498->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp498->SnapToPixels(true);
    temp498->Fill(temp499);
    uPtr(DefaultPanel)->Opacity(1.0f);
    uPtr(DefaultPanel)->Name(MainView::__selector73());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(DefaultPanel)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp500);
    temp500->Alignment(14);
    temp500->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp500->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp501);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp500->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp502);
    temp501->Value(::STRINGS[290/*"SHAKE TO BR...*/]);
    temp501->TextWrapping(1);
    temp501->LineSpacing(0.0f);
    temp501->FontSize(65.0f);
    temp501->TextAlignment(1);
    temp501->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp501->Alignment(4);
    temp501->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    temp501->Font(MainView::TitleFont());
    temp502->Value(::STRINGS[291/*"Skaka telef...*/]);
    temp502->TextAlignment(1);
    temp502->Alignment(14);
    temp503->Height(::g::Uno::UX::Size__New1(30.0f, 4));
    temp503->Alignment(12);
    temp503->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp503->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), IceBreakerButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp503->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ShowResult);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp503->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), IceBreakerIcon);
    uPtr(IceBreakerButton)->StretchMode(6);
    uPtr(IceBreakerButton)->Width(::g::Uno::UX::Size__New1(20.0f, 4));
    uPtr(IceBreakerButton)->Alignment(14);
    uPtr(IceBreakerButton)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 40.0f));
    uPtr(IceBreakerButton)->Opacity(0.0f);
    uPtr(IceBreakerButton)->Name(MainView::__selector74());
    ::g::Fuse::Gestures::Clicked::AddHandler(IceBreakerButton, uDelegate::New(::TYPES[15/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb15)));
    uPtr(IceBreakerButton)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::IceBreakerButtonWhite8a174a20()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(IceBreakerButton)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp504);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(IceBreakerButton)->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp504->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp505);
    temp505->Target((uObject*)ShowResult);
    uPtr(ShowResult)->Name(MainView::__selector75());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ShowResult)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp506);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ShowResult)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp507);
    ::g::Fuse::Animations::Change__set_Value_fn(temp506, uCRef(1.0f));
    temp506->Duration(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp507, uCRef(0.0f));
    temp507->Duration(0.0);
    uPtr(IceBreakerIcon)->StretchMode(6);
    uPtr(IceBreakerIcon)->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    uPtr(IceBreakerIcon)->Alignment(14);
    uPtr(IceBreakerIcon)->X(::g::Uno::UX::Size__New1(0.0f, 1));
    uPtr(IceBreakerIcon)->Opacity(1.0f);
    uPtr(IceBreakerIcon)->Name(MainView::__selector76());
    uPtr(IceBreakerIcon)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::IceBreakerIcon4b4540d8()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(IceBreakerIcon)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp508);
    temp508->Threshold(0.1f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp509);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp510);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp511);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp512);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp513);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp514);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp515);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp516);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp517);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp518);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp519);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp520);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp508->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp521);
    temp509->Degrees(10.0f);
    temp509->Duration(0.5);
    temp509->Delay(0.5);
    temp510->Degrees(-20.0f);
    temp510->Duration(1.0);
    temp510->Delay(1.0);
    temp511->Degrees(20.0f);
    temp511->Duration(1.0);
    temp511->Delay(2.0);
    temp512->Degrees(-20.0f);
    temp512->Duration(1.0);
    temp512->Delay(3.0);
    temp513->Degrees(20.0f);
    temp513->Duration(1.0);
    temp513->Delay(4.0);
    temp514->Degrees(-20.0f);
    temp514->Duration(1.0);
    temp514->Delay(5.0);
    temp515->Degrees(20.0f);
    temp515->Duration(1.0);
    temp515->Delay(6.0);
    temp516->Degrees(-20.0f);
    temp516->Duration(1.0);
    temp516->Delay(7.0);
    temp517->Degrees(20.0f);
    temp517->Duration(1.0);
    temp517->Delay(8.0);
    temp518->Degrees(-20.0f);
    temp518->Duration(1.0);
    temp518->Delay(9.0);
    temp519->Degrees(20.0f);
    temp519->Duration(1.0);
    temp519->Delay(10.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp520, uCRef(0.0f));
    temp520->Duration(0.3);
    temp520->Delay(11.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp521, uCRef(1.0f));
    temp521->Duration(0.3);
    temp521->Delay(11.0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp522);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp523);
    uPtr(sponsors)->Name(MainView::__selector77());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsors)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp524);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp524->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp525);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp524->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), indicatorSponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp524->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp528);
    temp525->LineNumber(2);
    temp525->FileName(::STRINGS[292/*"Pages/Spons...*/]);
    temp525->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::SponsorsPagec55e65e7()));
    uPtr(indicatorSponsor)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicatorSponsor)->Name(MainView::__selector78());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicatorSponsor, SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicatorSponsor)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp526);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp526->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp527);
    temp527->X(1.0f);
    temp527->Duration(0.4);
    temp527->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp527->Easing(::g::Fuse::Animations::Easing::BackIn());
    temp528->Background(temp556);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp528->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp529);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp528->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationSponsors);
    temp529->ColumnCount(2);
    temp529->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp529, 2);
    temp529->Background(temp536);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp529->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp529->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), GoodiebagTab);
    uPtr(SponsorTab)->Name(MainView::__selector79());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(SponsorTab)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp530);
    temp530->Text(::STRINGS[254/*"SPONSORER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp530->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp531);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp531->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp532);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp532, sponsor);
    uPtr(GoodiebagTab)->Name(MainView::__selector80());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(GoodiebagTab)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp533);
    temp533->Text(::STRINGS[293/*"GOODIEBAG"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp533->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp534);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp534->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp535);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp535, goodiebag);
    uPtr(navigationSponsors)->Name(MainView::__selector81());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationSponsors)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), sponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationSponsors)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), goodiebag);
    uPtr(sponsor)->Name(MainView::__selector82());
    uPtr(sponsor)->Background(temp549);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsor)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp537);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsor)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp539);
    temp537->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp537->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp538);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp538, SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp539->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp540);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp540->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp541);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp541->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp542);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp541->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp543);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp541->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp545);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp541->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp548);
    temp542->Value(::STRINGS[294/*"Tack!"*/]);
    temp542->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp543->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp543->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp543->Alignment(6);
    temp543->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 30.0f));
    temp543->SnapToPixels(true);
    temp543->Fill(temp544);
    temp545->ColumnCount(3);
    ::g::Fuse::Controls::Grid::SetRow(temp545, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp545->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp546);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp547);
    temp548->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp548->Alignment(14);
    temp548->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp548->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundNewsDetails819ed1f3()));
    uPtr(goodiebag)->Name(MainView::__selector83());
    uPtr(goodiebag)->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(goodiebag)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp550);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(goodiebag)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp552);
    temp550->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp550->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp551);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp551, GoodiebagTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp552->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp553);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp553->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp554);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp555);
    uPtr(map)->Name(MainView::__selector84());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(map)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp557);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp557->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp558);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp557->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp557->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp565);
    temp558->LineNumber(8);
    temp558->FileName(::STRINGS[295/*"Pages/Map/M...*/]);
    temp558->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPage0b082c27()));
    uPtr(indicator)->Name(MainView::__selector85());
    uPtr(indicator)->Background(temp564);
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp559);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp562);
    temp559->ZOffset(1.0f);
    temp559->Background(temp561);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp559->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp560);
    temp560->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp560->ZOffset(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp562->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp563);
    temp563->X(1.0f);
    temp563->Duration(0.4);
    temp563->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp563->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp565->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp566);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp565->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationControl);
    temp566->ColumnCount(2);
    temp566->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp566, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp566->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp566->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), plan4Tab);
    uPtr(plan3Tab)->Name(MainView::__selector86());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3Tab)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp567);
    temp567->Text(::STRINGS[296/*"PLAN 3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp567->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp568);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp568->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp569);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp569, plan3);
    uPtr(plan4Tab)->Name(MainView::__selector87());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4Tab)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp570);
    temp570->Text(::STRINGS[297/*"PLAN 4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp570->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp571);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp571->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp572);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp572, plan4);
    uPtr(navigationControl)->Name(MainView::__selector88());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControl)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), plan3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControl)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), plan4);
    uPtr(plan3)->Name(MainView::__selector89());
    uPtr(plan3)->Background(temp599);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp573);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), infoIconMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), crossIconMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), MapToggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), popupInfoMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp598);
    temp573->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp573->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp574);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp574, plan3Tab);
    uPtr(infoIconMap)->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIconMap)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIconMap)->Alignment(7);
    uPtr(infoIconMap)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(infoIconMap)->Name(MainView::__selector90());
    uPtr(infoIconMap)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoIconWhite2f2ec674()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoIconMap)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp575);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp575->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp576);
    temp576->Target((uObject*)MapToggle);
    uPtr(crossIconMap)->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIconMap)->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIconMap)->Alignment(7);
    uPtr(crossIconMap)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(crossIconMap)->Opacity(0.0f);
    uPtr(crossIconMap)->Name(MainView::__selector91());
    uPtr(crossIconMap)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon5653a7c5()));
    uPtr(MapToggle)->Name(MainView::__selector92());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp577);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp578);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp579);
    ::g::Fuse::Animations::Change__set_Value_fn(temp577, uCRef(1.0f));
    temp577->Duration(0.3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp578, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp579, uCRef(1.0f));
    uPtr(popupInfoMap)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfoMap)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfoMap)->Opacity(0.0f);
    uPtr(popupInfoMap)->Name(MainView::__selector93());
    uPtr(popupInfoMap)->Background(temp597);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupInfoMap)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp580);
    temp580->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp580->Color(::g::Fuse::Drawing::Colors::White());
    temp580->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp580->Height(::g::Uno::UX::Size__New1(270.0f, 1));
    temp580->Alignment(6);
    temp580->Margin(::g::Uno::Float4__New2(20.0f, 60.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp580->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp581);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp581->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp582);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp581->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp585);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp581->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp588);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp581->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp591);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp581->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp594);
    temp582->Orientation(0);
    temp582->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp582->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp583);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp582->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp584);
    temp583->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp583->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp583->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 10.0f));
    temp583->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoDiskIcon17c40378()));
    temp584->Value(::STRINGS[298/*"Infodisk"*/]);
    temp584->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp584->Alignment(10);
    temp585->Orientation(0);
    temp585->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp585->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp586);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp585->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp587);
    temp586->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp586->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp586->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp586->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ForetagsGarderobIcon954c1dd2()));
    temp587->Value(::STRINGS[299/*"Företagsgar...*/]);
    temp587->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp587->Alignment(10);
    temp588->Orientation(0);
    temp588->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp588->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp589);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp588->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp590);
    temp589->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp589->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp589->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp589->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ForetagsLoungeIcon612ba428()));
    temp590->Value(::STRINGS[300/*"Företagslou...*/]);
    temp590->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp590->Alignment(10);
    temp591->Orientation(0);
    temp591->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp591->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp592);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp591->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp593);
    temp592->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp592->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp592->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp592->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StudentGarderobIcon61404a0c()));
    temp593->Value(::STRINGS[301/*"Studentgard...*/]);
    temp593->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp593->Alignment(10);
    temp594->Orientation(0);
    temp594->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp594->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp595);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp594->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp596);
    temp595->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp595->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp595->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp595->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StudentLoungeIcon12949b82()));
    temp596->Value(::STRINGS[302/*"Studentlounge"*/]);
    temp596->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp596->Alignment(10);
    temp598->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp598->Alignment(10);
    temp598->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPlan3f655005a()));
    uPtr(plan4)->Name(MainView::__selector94());
    uPtr(plan4)->Background(temp626);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp600);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), infoIconMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), crossIconMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), MapToggle2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), popupInfoMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp625);
    temp600->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp600->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp601);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp601, plan4Tab);
    uPtr(infoIconMap2)->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIconMap2)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIconMap2)->Alignment(7);
    uPtr(infoIconMap2)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(infoIconMap2)->Name(MainView::__selector95());
    uPtr(infoIconMap2)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoIconWhite2f2ec674()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoIconMap2)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp602);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp602->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp603);
    temp603->Target((uObject*)MapToggle2);
    uPtr(crossIconMap2)->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIconMap2)->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIconMap2)->Alignment(7);
    uPtr(crossIconMap2)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(crossIconMap2)->Opacity(0.0f);
    uPtr(crossIconMap2)->Name(MainView::__selector96());
    uPtr(crossIconMap2)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon5653a7c5()));
    uPtr(MapToggle2)->Name(MainView::__selector97());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle2)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp604);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle2)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp605);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle2)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp606);
    ::g::Fuse::Animations::Change__set_Value_fn(temp604, uCRef(1.0f));
    temp604->Duration(0.3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp605, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp606, uCRef(1.0f));
    uPtr(popupInfoMap2)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfoMap2)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfoMap2)->Opacity(0.0f);
    uPtr(popupInfoMap2)->Name(MainView::__selector98());
    uPtr(popupInfoMap2)->Background(temp624);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupInfoMap2)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp607);
    temp607->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp607->Color(::g::Fuse::Drawing::Colors::White());
    temp607->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp607->Height(::g::Uno::UX::Size__New1(270.0f, 1));
    temp607->Alignment(6);
    temp607->Margin(::g::Uno::Float4__New2(20.0f, 60.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp607->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp608);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp608->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp609);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp608->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp612);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp608->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp615);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp608->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp618);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp608->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp621);
    temp609->Orientation(0);
    temp609->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp609->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp610);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp609->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp611);
    temp610->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp610->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp610->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 10.0f));
    temp610->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoDiskIcon17c40378()));
    temp611->Value(::STRINGS[298/*"Infodisk"*/]);
    temp611->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp611->Alignment(10);
    temp612->Orientation(0);
    temp612->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp612->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp613);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp612->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp614);
    temp613->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp613->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp613->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp613->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ForetagsGarderobIcon954c1dd2()));
    temp614->Value(::STRINGS[299/*"Företagsgar...*/]);
    temp614->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp614->Alignment(10);
    temp615->Orientation(0);
    temp615->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp615->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp616);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp615->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp617);
    temp616->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp616->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp616->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp616->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ForetagsLoungeIcon612ba428()));
    temp617->Value(::STRINGS[300/*"Företagslou...*/]);
    temp617->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp617->Alignment(10);
    temp618->Orientation(0);
    temp618->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp618->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp619);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp618->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp620);
    temp619->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp619->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp619->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp619->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StudentGarderobIcon61404a0c()));
    temp620->Value(::STRINGS[301/*"Studentgard...*/]);
    temp620->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp620->Alignment(10);
    temp621->Orientation(0);
    temp621->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp621->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp622);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp621->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp623);
    temp622->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp622->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp622->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp622->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StudentLoungeIcon12949b82()));
    temp623->Value(::STRINGS[302/*"Studentlounge"*/]);
    temp623->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp623->Alignment(10);
    temp625->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp625->Alignment(10);
    temp625->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPlan4f6552653()));
    uPtr(aboutus)->Name(MainView::__selector99());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(aboutus)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp627);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp627->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp628);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp627->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp629);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp627->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp661);
    temp628->LineNumber(2);
    temp628->FileName(::STRINGS[303/*"Pages/About...*/]);
    temp628->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::AboutUsPage118699e7()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp629->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp630);
    temp630->ItemSpacing(16.0f);
    temp630->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp630->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp631);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp630->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), indicatorAbout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp630->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp634);
    temp631->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp631->Alignment(6);
    temp631->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp631->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhite2f420aa9()));
    uPtr(indicatorAbout)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicatorAbout)->Name(MainView::__selector100());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicatorAbout, AboutUsTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicatorAbout)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp632);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp632->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp633);
    temp633->X(1.0f);
    temp633->Duration(0.4);
    temp633->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp633->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp634->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp635);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp634->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationControlAbout);
    temp635->ColumnCount(2);
    temp635->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp635, 2);
    temp635->Background(temp642);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp635->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), AboutUsTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp635->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), ProjectTab);
    uPtr(AboutUsTab)->Name(MainView::__selector101());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AboutUsTab)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp636);
    temp636->Text(::STRINGS[256/*"OM OSS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp636->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp637);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp637->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp638);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp638, about);
    uPtr(ProjectTab)->Name(MainView::__selector102());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ProjectTab)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp639);
    temp639->Text(::STRINGS[304/*"PROJEKTKOMM...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp639->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp640);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp640->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp641);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp641, project);
    uPtr(navigationControlAbout)->Name(MainView::__selector103());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControlAbout)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), about);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControlAbout)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), project);
    uPtr(about)->Name(MainView::__selector104());
    uPtr(about)->Background(temp649);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(about)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp643);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(about)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp645);
    temp643->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp643->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp644);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp644, AboutUsTab);
    temp645->Padding(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp645->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp645->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp645->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp648);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp646);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp647);
    temp648->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp648->Alignment(10);
    temp648->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp648->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MiljomarktLogotypeWhitebe8d1e56()));
    uPtr(project)->Name(MainView::__selector105());
    uPtr(project)->Background(temp660);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(project)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp650);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(project)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp652);
    temp650->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp650->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp651);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp651, ProjectTab);
    temp652->Padding(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp652->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp652->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp653);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp652->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp654);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp652->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp656);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp652->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp659);
    temp653->Value(::STRINGS[305/*"PROJEKTKOMM...*/]);
    temp653->Alignment(10);
    temp654->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp654->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp654->Alignment(6);
    temp654->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 30.0f));
    temp654->Fill(temp655);
    temp656->ColumnCount(2);
    ::g::Fuse::Controls::Grid::SetRow(temp656, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp656->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp657);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp658);
    temp659->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp659->Alignment(10);
    temp659->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundNewsDetails819ed1f3()));
    temp661->StretchMode(6);
    temp661->Alignment(10);
    temp661->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundAbstractPaintaf87a254()));
    uPtr(login)->Name(MainView::__selector106());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(login)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp662);
    temp662->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp662->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp663);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp662->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), LoginPage);
    temp663->LineNumber(2);
    temp663->FileName(::STRINGS[306/*"Pages/Login...*/]);
    temp663->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::Logind834cf98()));
    uPtr(LoginPage)->Visibility(0);
    uPtr(LoginPage)->Name(MainView::__selector107());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(LoginPage)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp664);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(LoginPage)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp665);
    temp664->Alignment(6);
    temp664->Layer(1);
    temp664->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundIceBreaker4fd1a959()));
    temp665->Margin(::g::Uno::Float4__New2(60.0f, 120.0f, 60.0f, 60.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp665->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp665->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp667);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp665->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp665->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp669);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp665->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp670);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp665->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp673);
    temp35->PlaceholderText(::STRINGS[307/*"E-POST"*/]);
    temp35->PlaceholderColor(::g::Fuse::Drawing::Colors::White());
    temp35->TextAlignment(1);
    temp35->TextColor(::g::Fuse::Drawing::Colors::White());
    temp35->InputHint(1);
    temp35->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp35->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp35, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp35, 1);
    temp35->Font(MainView::Raleway());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp666);
    temp667->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp667->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp667->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp667, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp667, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp667, 2);
    temp36->PlaceholderText(::STRINGS[308/*"NAMN"*/]);
    temp36->PlaceholderColor(::g::Fuse::Drawing::Colors::White());
    temp36->TextAlignment(1);
    temp36->TextColor(::g::Fuse::Drawing::Colors::White());
    temp36->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp36->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp36->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp36, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp36, 1);
    temp36->Font(MainView::Raleway());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp668);
    temp669->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp669->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp669->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp669, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp669, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp669, 2);
    temp670->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp670->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp670->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 15.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp670, uDelegate::New(::TYPES[15/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb16)));
    temp670->Background(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp670->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp671);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp670->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp672);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp670->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb16);
    temp671->Value(::STRINGS[245/*"LOGGA IN"*/]);
    temp671->Color(::g::Fuse::Drawing::Colors::Black());
    temp671->Alignment(10);
    temp671->Font(MainView::RalewayBlack());
    temp673->Value(::STRINGS[309/*"Har du inge...*/]);
    temp673->FontSize(12.0f);
    temp673->Font(MainView::Raleway());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), TheSidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), sidebarProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), shadowProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), NotInlogged);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), GaddenLogo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), FilterButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), FilterArrow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), PartnerTitle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), news);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), NewsFeed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), logoImage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), NewsDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), TitleTest);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), LectureDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), BackgroundImage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), partners);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), exhibitor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ExibitorList);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ExhibitorDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), FilterPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleEkonom);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleMiljovetare);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleJurist);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleLogostiker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveJurist);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveEkonom);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveMiljovetare);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveLogostiker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleSommarjobb);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleUppsats);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleInternship);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleHeltid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleExtrajobb);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveSommarjobb);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveUppsats);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveInternship);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveHeltid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveExtrajobb);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleKandidat);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleMaster);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveKandidat);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveMaster);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleOnsdag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), CircleTorsdag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveOnsdag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ActiveTorsdag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ExhibitorBackground);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), FilterBackground);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), program);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ProgramFeed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ProgramDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), icebreaker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), popupBackground);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), infoIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), crossIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), opacityToggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), popupInfo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ResultPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), DefaultPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), IceBreakerButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ShowResult);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), IceBreakerIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), sponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), indicatorSponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), GoodiebagTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), navigationSponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), sponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), goodiebag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), map);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), plan4Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), navigationControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), plan3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), infoIconMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), crossIconMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), MapToggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), popupInfoMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), plan4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), infoIconMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), crossIconMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), MapToggle2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), popupInfoMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), aboutus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), indicatorAbout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), AboutUsTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), ProjectTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), navigationControlAbout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), about);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), project);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), LoginPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[16/*Uno.Collections.ICollection<object>*/]), temp_eb16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), TheSidebar);
}

// public MainView New() [static] :1267
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
