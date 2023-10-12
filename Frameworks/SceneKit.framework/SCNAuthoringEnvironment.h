/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAuthoringEnvironment : NSObject {
    unsigned short  _arrowIndicesCount;
    const void * _arrowIndicesOffset;
    SCNAuthoringEnvironment2 * _authEnv2;
    long long  _authoringDisplayMask;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned char drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned long long verticesStride; 
            unsigned long long colorsStride; 
            unsigned long long uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    }  _boldLogsInfo;
    struct { 
        struct { 
            struct __C3DImage {} *texture; 
            struct CGSize { 
                double width; 
                double height; 
            } textureSize; 
            bool isRetina; 
        } textureInfo; 
        double lineHeight; 
        short characterWidth_texture; 
        double *characterWidth_typography; 
        short characterHeight_texture; 
        struct { /* ? */ } *symbolRects; 
    }  _boldTextInfo;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } * _colorAndTextureProgram;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } * _colorOnlyProgram;
    unsigned int  _consoleLineCount;
    id  _delegate;
    struct __C3DRasterizerStates { } * _depthOffCullOffStates;
    struct __C3DRasterizerStates { } * _depthOffCullOnStates;
    struct __C3DRasterizerStates { } * _depthOnCullOffStates;
    struct __C3DRasterizerStates { } * _depthOnCullOnStates;
    float  _drawScale;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned char drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned long long verticesStride; 
            unsigned long long colorsStride; 
            unsigned long long uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    }  _dynamicLinesInfo;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned char drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned long long verticesStride; 
            unsigned long long colorsStride; 
            unsigned long long uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    }  _dynamicLinesNoDepthTestInfo;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned char drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned long long verticesStride; 
            unsigned long long colorsStride; 
            unsigned long long uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    }  _dynamicTrianglesInfo;
    long long  _editingSpace;
    struct __C3DEngineContext { } * _engineContext;
    bool  _graphicalSelectionEnabled;
    double  _gridUnit;
    unsigned int  _hasLighting;
    NSSet * _initialSelection;
    bool  _isOrbiting;
    float  _lastGridDistance;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned char drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned long long verticesStride; 
            unsigned long long colorsStride; 
            unsigned long long uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    }  _lightProbesInfo;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } * _lightProbesProgram;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned char drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned long long verticesStride; 
            unsigned long long colorsStride; 
            unsigned long long uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    }  _logsInfo;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } * _noColorProgram;
    struct { 
        struct { 
            struct __C3DImage {} *texture; 
            struct CGSize { 
                double width; 
                double height; 
            } textureSize; 
            bool isRetina; 
        } textureInfo; 
        double lineHeight; 
        short characterWidth_texture; 
        double *characterWidth_typography; 
        short characterHeight_texture; 
        struct { /* ? */ } *symbolRects; 
    }  _normalTextInfo;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned char drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned long long verticesStride; 
            unsigned long long colorsStride; 
            unsigned long long uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    }  _overlayDynamicLinesInfo;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned char drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned long long verticesStride; 
            unsigned long long colorsStride; 
            unsigned long long uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    }  _overlayDynamicTriangleInfo;
    unsigned short  _quadrantIndicesCount;
    const void * _quadrantIndicesOffset;
    unsigned short  _quadrantRingIndicesCount;
    const void * _quadrantRingIndicesOffset;
    <SCNSceneRenderer> * _sceneRenderer;
    bool  _sceneRendererIsSCNView;
    NSArray * _selectedNodes;
    bool  _selecting;
    NSMutableOrderedSet * _selection;
    bool  _selectionIsReadonly;
    void _selectionP0;
    void _selectionP1;
    bool  _shouldSnapOnGrid;
    bool  _shouldSnapToAlign;
    struct { 
        bool initialized; 
        bool showFullStatistics; 
        bool showRenderOptionsPanel; 
        float fps; 
        float waitDisplayLinkTime; 
        long long pressedButtonIndex; 
        struct __CFString {} *fpsString; 
        struct __CFString {} *shortString; 
        struct __CFString {} *internalString; 
        unsigned int lightingStatistics[9]; 
        struct __C3DEngineStats { 
            unsigned int verticesProcessed; 
            unsigned int primitivesProcessed; 
            unsigned int drawCount; 
            unsigned int drawStep; 
            unsigned int frameCount; 
            unsigned int fboSwitches; 
            unsigned int vboSwitches; 
            unsigned int attSwitches; 
            unsigned int attEnabling; 
            unsigned int iboSwitches; 
            unsigned int vaoSwitches; 
            unsigned int prgSwitches; 
            unsigned int texSwitches; 
            unsigned int rssSwitches; 
            unsigned int getCount; 
            unsigned int uniformFloatSent; 
            unsigned int uniformIntSent; 
            unsigned int uniformVector2Sent; 
            unsigned int uniformVector3Sent; 
            unsigned int uniformVector4Sent; 
            unsigned int uniformMatrix4Sent; 
            unsigned int vboUploaded; 
            unsigned int iboUploaded; 
            unsigned int texUploaded; 
            double cpuTime; 
            double cstrTime; 
            double phyTime; 
            double prtTime; 
            double animTime; 
            double skinTime; 
            double mrphTime; 
            double rendTime; 
            double twoDTime; 
            double delegateTime; 
            double glFlushTime; 
            double waitDisplayLinkTime; 
            double drawableWaitTime; 
            double gpuTime; 
            double lastDisplayLinkTime; 
            unsigned int prgCount; 
            unsigned int texCount; 
            unsigned int fboCount; 
            unsigned int vboCount; 
            unsigned int rboCount; 
            unsigned int iboCount; 
            unsigned int cboCount; 
            unsigned int vaoCount; 
            unsigned int fboMemory; 
            unsigned int rboMemory; 
            unsigned int vboMemory; 
            unsigned int iboMemory; 
            unsigned int cboMemory; 
            unsigned int texMemory; 
            unsigned int backBufferMemory; 
            unsigned int depthBuffersMemory; 
            unsigned int onlineShaderCount; 
            double onlineShaderCompilationTime; 
            unsigned int renderPipelineCount; 
            double renderPipelineCompilationTime; 
            unsigned int computePipelineCount; 
            double computePipelineCompilationTime; 
            double frmAvgTime; 
            double frmMinTime; 
            double frmMaxTime; 
            double frameTimeHistory[60]; 
            unsigned int frameTimeCurrentIndex; 
            double startTime; 
            double lastFrameTime; 
        } stats; 
    }  _statisticsInfo;
    bool  _surroundToSelect;
    struct { 
        struct __C3DFXProgram {} *weakProgram; 
        unsigned int baseIndex; 
        unsigned int baseVertex; 
        unsigned int vertexSize; 
        unsigned int allocatedVerticesSize; 
        unsigned int allocatedIndicesSize; 
        struct __C3DImage {} *textureImage; 
        struct __C3DTexture {} *texture; 
        unsigned char drawMode; 
        bool orthographic; 
        bool clearDepthBuffer; 
        bool enableDepthTest; 
        bool enableCulling; 
        bool isDynamic; 
        struct __C3DMesh {} *mesh; 
        struct __C3DMeshElement {} *meshElement; 
        struct { 
            unsigned long long verticesStride; 
            unsigned long long colorsStride; 
            unsigned long long uvsStride; 
            char *verticesData; 
            char *colorsData; 
            char *uvsData; 
        } _cache; 
        NSMutableSet *_usedMeshes; 
        NSMutableSet *_freeMeshes; 
        NSMutableSet *_usedMeshElements; 
        NSMutableSet *_freeMeshElements; 
    }  _textInfo;
    unsigned char  _timedRecordingBuffer;
    unsigned int  _timedRecordingBufferEnd;
    unsigned int  _timedRecordingBufferStart;
    double  _timedRecordingExpirationTime;
    NSMutableArray * _visibleManipulableItems;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } * _wireframeProgram;
    void * _wireframeRenderer;
}

@property (nonatomic) long long authoringDisplayMask;
@property (nonatomic, readonly) SCNNode *authoringOverlayLayer;
@property (nonatomic) <SCNAuthoringEnvironmentDelegate> *delegate;
@property (nonatomic) long long editingSpace;
@property (nonatomic) bool graphicalSelectionEnabled;
@property (nonatomic, readonly) double gridUnit;
@property (nonatomic, readonly) SCNManipulator *manipulator;
@property (readonly) <SCNSceneRenderer> *sceneRenderer;
@property (nonatomic, readonly) NSArray *selectedNodes;
@property (nonatomic) bool selectionIsReadonly;
@property (nonatomic) bool shouldSnapOnGrid;
@property (nonatomic) bool shouldSnapToAlign;
@property (nonatomic) bool surroundToSelect;
@property (nonatomic, readonly) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } viewMatrix;

+ (id)authoringEnvironmentForSceneRenderer:(id)arg1;
+ (id)authoringEnvironmentForSceneRenderer:(id)arg1 createIfNeeded:(bool)arg2;
+ (long long)defaultAuthoringDisplayMask;
+ (id)rendererForSceneRenderer:(id)arg1;

- (id)_initWithEngineContext:(struct __C3DEngineContext { }*)arg1;
- (void)_setupAuthoringEnv2:(id)arg1;
- (long long)authoringDisplayMask;
- (id)authoringEnvironment2;
- (id)authoringOverlayLayer;
- (void)beginEditingNode:(id)arg1;
- (void)beginEditingNodes:(id)arg1;
- (void)beginOrbiting;
- (void)cancelEdition;
- (void)dealloc;
- (id)delegate;
- (bool)didTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawLineFromPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 toPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg2 color:(id)arg3;
- (void)drawString:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 color:(id)arg3;
- (long long)editingSpace;
- (void)endOrbiting;
- (bool)graphicalSelectionEnabled;
- (double)gridUnit;
- (id)init;
- (bool)isEditingSubComponent;
- (id)manipulator;
- (id)renderer;
- (void)saveInitialSelection;
- (void)sceneDidChange:(id)arg1;
- (id)sceneRenderer;
- (id)selectedItems;
- (id)selectedNodes;
- (bool)selectionIsReadonly;
- (void)setAuthoringDisplayMask:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingSpace:(long long)arg1;
- (void)setGraphicalSelectionEnabled:(bool)arg1;
- (void)setSelectionIsReadonly:(bool)arg1;
- (void)setShouldSnapOnGrid:(bool)arg1;
- (void)setShouldSnapToAlign:(bool)arg1;
- (void)setSurroundToSelect:(bool)arg1;
- (void)setupAuthoringEnv2;
- (bool)shouldSnapOnGrid;
- (bool)shouldSnapToAlign;
- (bool)surroundToSelect;
- (void)update;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })viewMatrix;

@end
