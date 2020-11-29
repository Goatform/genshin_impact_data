// Namespace: MiHoYoSDKJSON
[DefaultMemberAttribute] // RVA: 0x64C20 Offset: 0x64020
public class JSONNode // TypeDefIndex: 4060
{
    // Fields
    [DebuggerBrowsableAttribute] // RVA: 0x62E40 Offset: 0x62240
    [CompilerGeneratedAttribute] // RVA: 0x62E40 Offset: 0x62240
    private bool &lt;IsString&gt;k__BackingField; // 0x10

    // Properties
    public virtual JSONNode Item { get; }
    public virtual JSONNode Item { get; set; }
    public virtual string Value { get; }
    public virtual bool IsString { set; }
    public virtual JSONArray AsArray { get; }
    public virtual JSONClass AsObject { get; }

    // Methods
    public virtual void Add(string aKey, JSONNode aItem) { } // RVA: 0x34E7A0 Offset: 0x34DBA0
    public virtual JSONNode get_Item(int aIndex) { } // RVA: 0x11C99A0 Offset: 0x11C8DA0
    public virtual JSONNode get_Item(string aKey) { } // RVA: 0x11C99A0 Offset: 0x11C8DA0
    public virtual void set_Item(string aKey, JSONNode value) { } // RVA: 0x34E7A0 Offset: 0x34DBA0
    public virtual string get_Value() { } // RVA: 0x238FEE0 Offset: 0x238F2E0
    [CompilerGeneratedAttribute] // RVA: 0x62B60 Offset: 0x61F60
    public virtual void set_IsString(bool value) { } // RVA: 0xDDA110 Offset: 0xDD9510
    public virtual void Add(JSONNode aItem) { } // RVA: 0x238E860 Offset: 0x238DC60
    public override string ToString() { } // RVA: 0x238FDB0 Offset: 0x238F1B0
    public virtual JSONArray get_AsArray() { } // RVA: 0x238FDE0 Offset: 0x238F1E0
    public virtual JSONClass get_AsObject() { } // RVA: 0x238FE60 Offset: 0x238F260
    public static JSONNode op_Implicit(string s) { } // RVA: 0x238FFB0 Offset: 0x238F3B0
    public static string op_Implicit(JSONNode d) { } // RVA: 0x2390010 Offset: 0x238F410
    public static bool op_Equality(JSONNode a, object b) { } // RVA: 0x238FF10 Offset: 0x238F310
    public static bool op_Inequality(JSONNode a, object b) { } // RVA: 0x23900A0 Offset: 0x238F4A0
    public override bool Equals(object obj) { } // RVA: 0x238E8C0 Offset: 0x238DCC0
    public override int GetHashCode() { } // RVA: 0x1F05AE0 Offset: 0x1F04EE0
    internal static string Escape(string aText) { } // RVA: 0x238E8D0 Offset: 0x238DCD0
    public static JSONNode Parse(string aJSON) { } // RVA: 0x238EB10 Offset: 0x238DF10
    public void .ctor() { } // RVA: 0x34E240 Offset: 0x34D640
}

// Namespace: MiHoYoSDKJSON
[DefaultMemberAttribute] // RVA: 0x64C20 Offset: 0x64020
public class JSONArray : JSONNode, IEnumerable // TypeDefIndex: 4061
{
    // Fields
    private List&lt;JSONNode&gt; m_List; // 0x18

    // Properties
    public override JSONNode Item { get; }
    public override JSONNode Item { get; set; }

    // Methods
    public override JSONNode get_Item(int aIndex) { } // RVA: 0x238D780 Offset: 0x238CB80
    public override JSONNode get_Item(string aKey) { } // RVA: 0x238D840 Offset: 0x238CC40
    public override void set_Item(string aKey, JSONNode value) { } // RVA: 0x238D8B0 Offset: 0x238CCB0
    public override void Add(string aKey, JSONNode aItem) { } // RVA: 0x238D450 Offset: 0x238C850
    public IEnumerator GetEnumerator() { } // RVA: 0x238D4B0 Offset: 0x238C8B0
    public override string ToString() { } // RVA: 0x238D510 Offset: 0x238C910
    public void .ctor() { } // RVA: 0x238D720 Offset: 0x238CB20
}

// Namespace: 
[CompilerGeneratedAttribute] // RVA: 0x62B60 Offset: 0x61F60
private sealed class JSONArray.&lt;GetEnumerator&gt;d__14 : IEnumerator&lt;object&gt;, IDisposable, IEnumerator // TypeDefIndex: 4062
{
    // Fields
    private int &lt;&gt;1__state; // 0x10
    private object &lt;&gt;2__current; // 0x18
    public JSONArray &lt;&gt;4__this; // 0x20
    private Enumerator&lt;JSONNode&gt; &lt;&gt;s__1; // 0x28
    private JSONNode &lt;N&gt;5__2; // 0x40

    // Properties
    private object System.Collections.Generic.IEnumerator&lt;System.Object&gt;.Current { get; }
    private object System.Collections.IEnumerator.Current { get; }

    // Methods
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    public void .ctor(int &lt;&gt;1__state) { } // RVA: 0xF8E870 Offset: 0xF8DC70
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    private void System.IDisposable.Dispose() { } // RVA: 0x2392780 Offset: 0x2391B80
    private bool MoveNext() { } // RVA: 0x23925A0 Offset: 0x23919A0
    private void &lt;&gt;m__Finally1() { } // RVA: 0x23927F0 Offset: 0x2391BF0
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    private object System.Collections.Generic.IEnumerator&lt;System.Object&gt;.get_Current() { } // RVA: 0x398760 Offset: 0x397B60
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    private void System.Collections.IEnumerator.Reset() { } // RVA: 0x2392730 Offset: 0x2391B30
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    private object System.Collections.IEnumerator.get_Current() { } // RVA: 0x398760 Offset: 0x397B60
}

// Namespace: MiHoYoSDKJSON
[DefaultMemberAttribute] // RVA: 0x64C20 Offset: 0x64020
public class JSONClass : JSONNode, IEnumerable // TypeDefIndex: 4063
{
    // Fields
    private Dictionary&lt;string, JSONNode&gt; m_Dict; // 0x18

    // Properties
    public override JSONNode Item { get; set; }
    public override JSONNode Item { get; }

    // Methods
    public override JSONNode get_Item(string aKey) { } // RVA: 0x238DE70 Offset: 0x238D270
    public override void set_Item(string aKey, JSONNode value) { } // RVA: 0x238DFE0 Offset: 0x238D3E0
    public override JSONNode get_Item(int aIndex) { } // RVA: 0x238DF30 Offset: 0x238D330
    public override void Add(string aKey, JSONNode aItem) { } // RVA: 0x238D910 Offset: 0x238CD10
    public IEnumerator GetEnumerator() { } // RVA: 0x238DA50 Offset: 0x238CE50
    public override string ToString() { } // RVA: 0x238DAB0 Offset: 0x238CEB0
    public void .ctor() { } // RVA: 0x238DE10 Offset: 0x238D210
}

// Namespace: 
[CompilerGeneratedAttribute] // RVA: 0x62B60 Offset: 0x61F60
private sealed class JSONClass.&lt;GetEnumerator&gt;d__18 : IEnumerator&lt;object&gt;, IDisposable, IEnumerator // TypeDefIndex: 4064
{
    // Fields
    private int &lt;&gt;1__state; // 0x10
    private object &lt;&gt;2__current; // 0x18
    public JSONClass &lt;&gt;4__this; // 0x20
    private Enumerator&lt;string, JSONNode&gt; &lt;&gt;s__1; // 0x28
    private KeyValuePair&lt;string, JSONNode&gt; &lt;N&gt;5__2; // 0x48

    // Properties
    private object System.Collections.Generic.IEnumerator&lt;System.Object&gt;.Current { get; }
    private object System.Collections.IEnumerator.Current { get; }

    // Methods
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    public void .ctor(int &lt;&gt;1__state) { } // RVA: 0xF8E870 Offset: 0xF8DC70
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    private void System.IDisposable.Dispose() { } // RVA: 0x2392A70 Offset: 0x2391E70
    private bool MoveNext() { } // RVA: 0x2392830 Offset: 0x2391C30
    private void &lt;&gt;m__Finally1() { } // RVA: 0x2392AE0 Offset: 0x2391EE0
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    private object System.Collections.Generic.IEnumerator&lt;System.Object&gt;.get_Current() { } // RVA: 0x398760 Offset: 0x397B60
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    private void System.Collections.IEnumerator.Reset() { } // RVA: 0x2392A20 Offset: 0x2391E20
    [DebuggerHiddenAttribute] // RVA: 0x62B70 Offset: 0x61F70
    private object System.Collections.IEnumerator.get_Current() { } // RVA: 0x398760 Offset: 0x397B60
}

// Namespace: MiHoYoSDKJSON
public class JSONData : JSONNode // TypeDefIndex: 4065
{
    // Fields
    private string m_Data; // 0x18

    // Properties
    public override string Value { get; }

    // Methods
    public override string get_Value() { } // RVA: 0x11D4520 Offset: 0x11D3920
    public void .ctor(string aData) { } // RVA: 0xF630E0 Offset: 0xF624E0
    public override string ToString() { } // RVA: 0x238E090 Offset: 0x238D490
}

// Namespace: MiHoYoSDKJSON
[DefaultMemberAttribute] // RVA: 0x64C20 Offset: 0x64020
internal class JSONLazyCreator : JSONNode // TypeDefIndex: 4066
{
    // Fields
    private JSONNode m_Node; // 0x18
    private string m_Key; // 0x20

    // Properties
    public override JSONNode Item { get; }
    public override JSONNode Item { get; set; }
    public override JSONArray AsArray { get; }
    public override JSONClass AsObject { get; }

    // Methods
    public void .ctor(JSONNode aNode) { } // RVA: 0x238E440 Offset: 0x238D840
    public void .ctor(JSONNode aNode, string aKey) { } // RVA: 0x238E3F0 Offset: 0x238D7F0
    private void Set(JSONNode aVal) { } // RVA: 0x238E350 Offset: 0x238D750
    public override JSONNode get_Item(int aIndex) { } // RVA: 0x238E6D0 Offset: 0x238DAD0
    public override JSONNode get_Item(string aKey) { } // RVA: 0x238E660 Offset: 0x238DA60
    public override void set_Item(string aKey, JSONNode value) { } // RVA: 0x238E740 Offset: 0x238DB40
    public override void Add(JSONNode aItem) { } // RVA: 0x238E230 Offset: 0x238D630
    public override void Add(string aKey, JSONNode aItem) { } // RVA: 0x238E110 Offset: 0x238D510
    public override bool Equals(object obj) { } // RVA: 0x238E340 Offset: 0x238D740
    public override int GetHashCode() { } // RVA: 0x1F05AE0 Offset: 0x1F04EE0
    public override string ToString() { } // RVA: 0x238E3C0 Offset: 0x238D7C0
    public override JSONArray get_AsArray() { } // RVA: 0x238E480 Offset: 0x238D880
    public override JSONClass get_AsObject() { } // RVA: 0x238E570 Offset: 0x238D970
}

// Namespace: MiHoYoSDKJSON
public static class JSON // TypeDefIndex: 4067
{
    // Methods
    public static JSONNode Parse(string aJSON) { } // RVA: 0x23900C0 Offset: 0x238F4C0
}

// Namespace: MiHoYo.SDK
internal class MiHoYoSDKConfig // TypeDefIndex: 4068
{
    // Fields
    public static string LoginUrlProd; // 0x0
    public static string LoginUrlTest; // 0x8
    public static string LoginUrlOverseaProd; // 0x10
    public static string LoginUrlOverseaTest; // 0x18

    // Methods
    private static void .cctor() { } // RVA: 0x23903E0 Offset: 0x238F7E0
}

// Namespace: MiHoYo.SDK
public class MiHoYoSDKConfigManager // TypeDefIndex: 4069
{
    // Fields
    public static string ACCOUNT_URL; // 0x0
    public static MiHoYoSDKConfigManager.EnvType _env; // 0x8

    // Methods
    public static void SetEnv(string env) { } // RVA: 0x2390260 Offset: 0x238F660
    public static void Config() { } // RVA: 0x23900D0 Offset: 0x238F4D0
    private static void .cctor() { } // RVA: 0x2390360 Offset: 0x238F760
}

// Namespace: 
public enum MiHoYoSDKConfigManager.EnvType // TypeDefIndex: 4070
{
    // Fields
    public int value__; // 0x10
    public const MiHoYoSDKConfigManager.EnvType ENV_TYPE_PROD = 0; // 0x0
    public const MiHoYoSDKConfigManager.EnvType ENV_TYPE_TEST = 1; // 0x0
    public const MiHoYoSDKConfigManager.EnvType ENV_TYPE_OVERSEA_PROD = 2; // 0x0
    public const MiHoYoSDKConfigManager.EnvType ENV_TYPE_OVERSEA_TEST = 3; // 0x0
}

// Namespace: MiHoYo.SDK
public class MiHoYoSDKLoginManager : MonoBehaviour // TypeDefIndex: 4071
{
    // Fields
    private static float DISPATCH_CONNECT_TIMEOUT_SECOND; // 0x0
    private static string _accountUrl; // 0x8
    private static Action&lt;string&gt; _callback; // 0x10
    private static MiHoYoSDKLoginManager.RequestType _requestType; // 0x18
    private static string ACCOUNT_DATA_LIST_FILE; // 0x20
    private static string _language; // 0x28

    // Methods
    private void Update() { } // RVA: 0x2392170 Offset: 0x2391570
    public static void SetLocale(string language) { } // RVA: 0x2391E50 Offset: 0x2391250
    public static string GetAccount() { } // RVA: 0x2390790 Offset: 0x238FB90
    public static string GetAccountName() { } // RVA: 0x23904F0 Offset: 0x238F8F0
    private static void SetAccount(JSONNode account) { } // RVA: 0x23918E0 Offset: 0x2390CE0
    public static void Logout() { } // RVA: 0x2391210 Offset: 0x2390610
    private static void ResetAccount() { } // RVA: 0x23917F0 Offset: 0x2390BF0
    public static void Login(Action&lt;string&gt; callback) { } // RVA: 0x2390F60 Offset: 0x2390360
    private static void LoginByCheckToken(string uid, string token, Action&lt;string&gt; callback) { } // RVA: 0x23908A0 Offset: 0x238FCA0
    public static void LoginByPassword(string account, string password, Action&lt;string&gt; callback) { } // RVA: 0x2390C00 Offset: 0x2390000
    private IEnumerator ConnectAccountServer(string accountUrl, Action&lt;string&gt; callback) { } // RVA: 0x2390470 Offset: 0x238F870
    private void OnConnectAccountServer(string retJsonString, Action&lt;string&gt; callback) { } // RVA: 0x2391340 Offset: 0x2390740
    private bool TryGetRetCodeFromJsonString(string jsonString, out JSONNode retJson, out string errorMsg, out int retCode) { } // RVA: 0x2391EB0 Offset: 0x23912B0
    public void .ctor() { } // RVA: 0x3617B0 Offset: 0x360BB0
    private static void .cctor() { } // RVA: 0x2392300 Offset: 0x2391700
}

// Namespace: 
private enum MiHoYoSDKLoginManager.RequestType // TypeDefIndex: 4072
{
    // Fields
    public int value__; // 0x10
    public const MiHoYoSDKLoginManager.RequestType DEFAULT = 0; // 0x0
    public const MiHoYoSDKLoginManager.RequestType LOGIN_BY_PASSWORD = 1; // 0x0
    public const MiHoYoSDKLoginManager.RequestType TOKEN_CHECK = 2; // 0x0
}
