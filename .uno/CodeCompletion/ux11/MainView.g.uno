[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base("mainPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template1: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Page __parentInstance;
            public Template1(Template parent, Fuse.Controls.Page parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> temp_Value_inst;
            internal global::Fuse.Reactive.EventBinding temp_eb0;
            global::Uno.UX.NameTable __g_nametable;
            static string[] __g_static_nametable = new string[] {
                "temp_eb0"
            };
            static Template1()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.Panel();
                var temp = new global::Fuse.Controls.Text();
                temp_Value_inst = new PagesList_FuseControlsTextControl_Value_Property(temp, __selector0);
                var temp1 = new global::Fuse.Reactive.Data("title");
                __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
                var temp2 = new global::Fuse.Reactive.Data("clicked");
                var temp3 = new global::Fuse.Controls.Rectangle();
                var temp4 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp_eb0 = new global::Fuse.Reactive.EventBinding(temp2, __g_nametable);
                __self.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
                global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb0.OnEvent);
                temp3.CornerRadius = float4(3f, 3f, 3f, 3f);
                temp3.Color = float4(1f, 0.5137255f, 0.3843137f, 1f);
                temp3.Layer = Fuse.Layer.Background;
                temp.FontSize = 15f;
                temp.Color = float4(1f, 1f, 1f, 1f);
                temp.Alignment = Fuse.Elements.Alignment.Center;
                temp.Bindings.Add(temp4);
                __g_nametable.Objects.Add(temp_eb0);
                __self.Children.Add(temp3);
                __self.Children.Add(temp);
                __self.Bindings.Add(temp_eb0);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Value";
        }
        global::Uno.UX.Property<object> temp_Items_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "mainPage"
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Page();
            var temp = new global::Fuse.Reactive.Each();
            temp_Items_inst = new PagesList_FuseReactiveEach_Items_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("pages");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp2 = new global::Fuse.Controls.ScrollView();
            var temp3 = new global::Fuse.Controls.StackPanel();
            var temp4 = new Template1(this, __self);
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Name = __selector1;
            temp2.Children.Add(temp3);
            temp3.ItemSpacing = 7f;
            temp3.Margin = float4(7f, 7f, 7f, 7f);
            temp3.Children.Add(temp);
            temp.Templates.Add(temp4);
            temp.Bindings.Add(temp5);
            __g_nametable.Objects.Add(__self);
            __self.Children.Add(temp2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
        static global::Uno.UX.Selector __selector1 = "mainPage";
    }
    global::Uno.UX.Property<float> backButton_Opacity_inst;
    internal global::Fuse.Navigation.Router router;
    internal global::Fuse.Controls.Panel navBar;
    internal global::Fuse.Controls.Panel backButton;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "navBar",
        "backButton"
    };
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp1 = new global::Fuse.Reactive.FuseJS.Http();
        var temp2 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp3 = new global::Fuse.Drawing.BrushConverter();
        var temp4 = new global::Fuse.Triggers.BusyTaskModule();
        var temp5 = new global::Fuse.FileSystem.FileSystemModule();
        var temp6 = new global::Fuse.Storage.StorageModule();
        var temp7 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp8 = new global::Polyfills.Window.WindowModule();
        var temp9 = new global::FuseJS.Globals();
        var temp10 = new global::FuseJS.Lifecycle();
        var temp11 = new global::FuseJS.Environment();
        var temp12 = new global::FuseJS.Base64();
        var temp13 = new global::FuseJS.Bundle();
        var temp14 = new global::FuseJS.FileReaderImpl();
        var temp15 = new global::FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        backButton = new global::Fuse.Controls.Panel();
        backButton_Opacity_inst = new PagesList_FuseElementsElement_Opacity_Property(backButton, __selector0);
        router = new global::Fuse.Navigation.Router();
        var temp16 = new global::Fuse.Controls.DockPanel();
        var temp17 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp18 = new global::Fuse.Controls.StackPanel();
        var temp19 = new global::Fuse.Controls.StatusBarBackground();
        var temp20 = new global::Fuse.iOS.StatusBarConfig();
        navBar = new global::Fuse.Controls.Panel();
        var temp21 = new global::Fuse.Navigation.WhileCanGoBack();
        var temp22 = new global::Fuse.Controls.DockPanel();
        var temp23 = new global::Fuse.Controls.Text();
        var temp24 = new global::Fuse.Triggers.AddingAnimation();
        var temp25 = new global::Fuse.Animations.Change<float>(backButton_Opacity_inst);
        var temp26 = new global::Fuse.Triggers.RemovingAnimation();
        var temp27 = new global::Fuse.Animations.Change<float>(backButton_Opacity_inst);
        var temp28 = new global::Fuse.Gestures.Clicked();
        var temp29 = new global::Fuse.Navigation.GoBack();
        var temp30 = new global::Fuse.Drawing.StaticSolidColor(float4(0.2352941f, 0.7098039f, 0.8156863f, 1f));
        var temp31 = new global::Fuse.Controls.BottomBarBackground();
        var temp32 = new global::Fuse.Controls.Navigator();
        var mainPage = new Template(this, this);
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        router.Name = __selector1;
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp16.Children.Add(temp31);
        temp16.Children.Add(temp32);
        temp17.LineNumber = 5;
        temp17.FileName = "MainView.ux";
        temp17.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../MainView.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Top);
        temp18.Background = temp30;
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp20);
        temp18.Children.Add(navBar);
        temp20.Style = Fuse.Platform.StatusBarStyle.Light;
        navBar.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        navBar.Name = __selector2;
        global::Fuse.Controls.DockPanel.SetDock(navBar, Fuse.Layouts.Dock.Top);
        navBar.Children.Add(temp21);
        temp21.Nodes.Add(backButton);
        backButton.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        backButton.Width = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        backButton.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        backButton.Alignment = Fuse.Elements.Alignment.Left;
        backButton.Padding = float4(20f, 0f, 0f, 0f);
        backButton.Name = __selector3;
        backButton.Children.Add(temp22);
        backButton.Children.Add(temp24);
        backButton.Children.Add(temp26);
        backButton.Children.Add(temp28);
        temp22.Children.Add(temp23);
        temp23.Value = "BACK";
        temp23.FontSize = 18f;
        temp23.Color = float4(1f, 1f, 1f, 1f);
        temp23.Alignment = Fuse.Elements.Alignment.Center;
        temp23.Margin = float4(5f, 0f, 0f, 0f);
        global::Fuse.Controls.DockPanel.SetDock(temp23, Fuse.Layouts.Dock.Right);
        temp24.Animators.Add(temp25);
        temp25.Value = 0f;
        temp25.Duration = 0.3;
        temp26.Animators.Add(temp27);
        temp27.Value = 0f;
        temp27.Duration = 0.3;
        temp28.Actions.Add(temp29);
        global::Fuse.Controls.DockPanel.SetDock(temp31, Fuse.Layouts.Dock.Bottom);
        temp32.DefaultPath = "mainPage";
        temp32.Templates.Add(mainPage);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(navBar);
        __g_nametable.Objects.Add(backButton);
        this.Children.Add(router);
        this.Children.Add(temp16);
    }
    static global::Uno.UX.Selector __selector0 = "Opacity";
    static global::Uno.UX.Selector __selector1 = "router";
    static global::Uno.UX.Selector __selector2 = "navBar";
    static global::Uno.UX.Selector __selector3 = "backButton";
}
