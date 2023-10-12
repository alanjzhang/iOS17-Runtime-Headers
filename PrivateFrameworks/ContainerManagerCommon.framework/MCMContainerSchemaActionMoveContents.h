/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMContainerSchemaActionMoveContents : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL * _destURL;
    NSURL * _sourceURL;
}

+ (id)actionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 context:(id)arg3;
- (bool)performWithError:(id*)arg1;

@end
