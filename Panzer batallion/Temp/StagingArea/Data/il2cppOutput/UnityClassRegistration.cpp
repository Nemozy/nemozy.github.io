template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; template <> void RegisterClass<CapsuleCollider2D>();
class CircleCollider2D; template <> void RegisterClass<CircleCollider2D>();
class EdgeCollider2D; 
class PolygonCollider2D; template <> void RegisterClass<PolygonCollider2D>();
class ConstantForce; 
class DirectorPlayer; template <> void RegisterClass<DirectorPlayer>();
class Animator; template <> void RegisterClass<Animator>();
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; 
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class Terrain; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; 
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; 
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>();
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class CubemapArray; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class WebCamTexture; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 83 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. Renderer
	RegisterClass<Renderer>();
	//6. GUILayer
	RegisterClass<GUILayer>();
	//7. Mesh
	RegisterClass<Mesh>();
	//8. NamedObject
	RegisterClass<NamedObject>();
	//9. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//10. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//11. Transform
	RegisterClass<Transform>();
	//12. Shader
	RegisterClass<Shader>();
	//13. Material
	RegisterClass<Material>();
	//14. Sprite
	RegisterClass<Sprite>();
	//15. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//16. TextAsset
	RegisterClass<TextAsset>();
	//17. Texture
	RegisterClass<Texture>();
	//18. Texture2D
	RegisterClass<Texture2D>();
	//19. RenderTexture
	RegisterClass<RenderTexture>();
	//20. Rigidbody
	RegisterClass<Rigidbody>();
	//21. Collider
	RegisterClass<Collider>();
	//22. CharacterController
	RegisterClass<CharacterController>();
	//23. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//24. PolygonCollider2D
	RegisterClass<PolygonCollider2D>();
	//25. Collider2D
	RegisterClass<Collider2D>();
	//26. AudioClip
	RegisterClass<AudioClip>();
	//27. SampleClip
	RegisterClass<SampleClip>();
	//28. AudioSource
	RegisterClass<AudioSource>();
	//29. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//30. Animation
	RegisterClass<Animation>();
	//31. Animator
	RegisterClass<Animator>();
	//32. DirectorPlayer
	RegisterClass<DirectorPlayer>();
	//33. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//34. GUIElement
	RegisterClass<GUIElement>();
	//35. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//36. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//37. UI::Canvas
	RegisterClass<UI::Canvas>();
	//38. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//39. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//40. AnimationClip
	RegisterClass<AnimationClip>();
	//41. Motion
	RegisterClass<Motion>();
	//42. MeshRenderer
	RegisterClass<MeshRenderer>();
	//43. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//44. PreloadData
	RegisterClass<PreloadData>();
	//45. Cubemap
	RegisterClass<Cubemap>();
	//46. Texture3D
	RegisterClass<Texture3D>();
	//47. Texture2DArray
	RegisterClass<Texture2DArray>();
	//48. TimeManager
	RegisterClass<TimeManager>();
	//49. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//50. GameManager
	RegisterClass<GameManager>();
	//51. AudioManager
	RegisterClass<AudioManager>();
	//52. InputManager
	RegisterClass<InputManager>();
	//53. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//54. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//55. QualitySettings
	RegisterClass<QualitySettings>();
	//56. PhysicsManager
	RegisterClass<PhysicsManager>();
	//57. TagManager
	RegisterClass<TagManager>();
	//58. ScriptMapper
	RegisterClass<ScriptMapper>();
	//59. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//60. MonoScript
	RegisterClass<MonoScript>();
	//61. MonoManager
	RegisterClass<MonoManager>();
	//62. PlayerSettings
	RegisterClass<PlayerSettings>();
	//63. BuildSettings
	RegisterClass<BuildSettings>();
	//64. ResourceManager
	RegisterClass<ResourceManager>();
	//65. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//66. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//67. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//68. LevelGameManager
	RegisterClass<LevelGameManager>();
	//69. MeshFilter
	RegisterClass<MeshFilter>();
	//70. CircleCollider2D
	RegisterClass<CircleCollider2D>();
	//71. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//72. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>();
	//73. BoxCollider
	RegisterClass<BoxCollider>();
	//74. CapsuleCollider2D
	RegisterClass<CapsuleCollider2D>();
	//75. AudioListener
	RegisterClass<AudioListener>();
	//76. Avatar
	RegisterClass<Avatar>();
	//77. AnimatorController
	RegisterClass<AnimatorController>();
	//78. RenderSettings
	RegisterClass<RenderSettings>();
	//79. FlareLayer
	RegisterClass<FlareLayer>();
	//80. SphereCollider
	RegisterClass<SphereCollider>();
	//81. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//82. LightmapSettings
	RegisterClass<LightmapSettings>();

}
