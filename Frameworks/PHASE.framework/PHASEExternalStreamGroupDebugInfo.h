/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PHASE.framework/PHASE
 */

@interface PHASEExternalStreamGroupDebugInfo : NSObject <NSSecureCoding> {
    bool  _controlled;
    bool  _controllerPaused;
    NSDictionary * _streams;
}

@property (getter=isControlled, nonatomic, readonly) bool controlled;
@property (getter=isControllerPaused, nonatomic, readonly) bool controllerPaused;
@property (nonatomic, readonly, copy) NSDictionary *streams;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isControlled;
- (bool)isControllerPaused;
- (bool)isEqual:(id)arg1;
- (void)setControlled:(bool)arg1;
- (void)setControllerPaused:(bool)arg1;
- (void)setStreams:(id)arg1;
- (id)streams;

@end
