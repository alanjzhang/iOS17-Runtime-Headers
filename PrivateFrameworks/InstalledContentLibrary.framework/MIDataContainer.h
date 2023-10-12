/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary
 */

@interface MIDataContainer : MIContainer {
    int  _contentProtectionClass;
}

@property (nonatomic) int contentProtectionClass;

+ (id)dataContainerForExecutableBundle:(id)arg1 forPersona:(id)arg2 createIfNeeded:(bool)arg3 temporary:(bool)arg4 created:(bool*)arg5 error:(id*)arg6;

- (id)_oldCompatiblityLinkDestination;
- (int)contentProtectionClass;
- (void)makeSymlinkToBundleInContainerIfNeeded:(id)arg1;
- (void)setContentProtectionClass:(int)arg1;

@end
