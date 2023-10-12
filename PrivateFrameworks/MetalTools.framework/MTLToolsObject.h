/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsObject : NSObject {
    MTLToolsObject * _baseObject;
    MTLToolsDevice * _device;
    _Atomic int  _externalReferences;
    MTLToolsObject * _parent;
}

@property (nonatomic, retain) id baseObject;
@property (readonly) <MTLDevice> *device;

- (id)baseObject;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)originalObject;
- (id)parent;
- (void)setBaseObject:(id)arg1;
- (void)setOriginalObject:(id)arg1;
- (id)strongParent;

@end
