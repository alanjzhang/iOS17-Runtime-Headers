/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNScreenGazeFaceObjectState : NSObject {
    VNFaceObservation * _faceObservation;
    unsigned int  _frameIndex;
    unsigned long long  _imageHeight;
    unsigned long long  _imageWidth;
    struct _Geometry2D_point2D_ { 
        float x; 
        float y; 
    }  _leftPupil;
    struct _Geometry2D_point2D_ { 
        float x; 
        float y; 
    }  _rightPupil;
    void * _screenGazeState;
    struct _Geometry2D_rect2D_ { 
        struct _Geometry2D_point2D_ { 
            float x; 
            float y; 
        } origin; 
        struct _Geometry2D_size2D_ { 
            float height; 
            float width; 
        } size; 
    }  _unalignedFaceBoundingBox;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
