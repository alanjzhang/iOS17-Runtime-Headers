/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRGetPausedFileListUpdater : NSObject <BRGetPausedFileListProtocol, NSSecureCoding> {
    id /* block */  _callback;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallback:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updatePausedFileURL:(id)arg1 reply:(id /* block */)arg2;

@end
