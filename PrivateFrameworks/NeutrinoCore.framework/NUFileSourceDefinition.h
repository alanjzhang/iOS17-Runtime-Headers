/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFileSourceDefinition : NUSingleSourceDefinition {
    NSURL * _url;
    bool  _useEmbeddedPreview;
    NSString * _uti;
}

@property (readonly) NSURL *url;
@property (nonatomic) bool useEmbeddedPreview;
@property (readonly) NSString *uti;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;
- (long long)mediaType;
- (void)setUseEmbeddedPreview:(bool)arg1;
- (id)url;
- (bool)useEmbeddedPreview;
- (id)uti;

// NUFileSourceDefinition (NodeProvider)

- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;

@end
