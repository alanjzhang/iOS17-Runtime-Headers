/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUCGImageSourceDefinition : NUSingleSourceDefinition {
    struct CGImageSource { } * _imageSource;
}

@property (readonly) struct CGImageSource { }*imageSource;

- (void)dealloc;
- (struct CGImageSource { }*)imageSource;
- (id)init;
- (id)initWithCGImageSource:(struct CGImageSource { }*)arg1;
- (long long)mediaType;

// NUCGImageSourceDefinition (NodeProvider)

- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;

@end
