/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISGenerationRequest : NSObject <NSSecureCoding> {
    ISConcreteIcon * _icon;
    ISImageDescriptor * _imageDescriptor;
    unsigned long long  _lsDatabaseSequenceNumber;
    NSUUID * _lsDatabaseUUID;
}

@property (retain) ISConcreteIcon *icon;
@property (retain) ISImageDescriptor *imageDescriptor;
@property unsigned long long lsDatabaseSequenceNumber;
@property (retain) NSUUID *lsDatabaseUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)imageDescriptor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)lsDatabaseSequenceNumber;
- (id)lsDatabaseUUID;
- (void)setIcon:(id)arg1;
- (void)setImageDescriptor:(id)arg1;
- (void)setLsDatabaseSequenceNumber:(unsigned long long)arg1;
- (void)setLsDatabaseUUID:(id)arg1;

// ISGenerationRequest (Generation)

- (id)_decorationRecipeKeyFromTypeIdentifier:(id)arg1 position:(long long)arg2;
- (id)generateImage;
- (id)generateImageReturningRecordIdentifiers:(id*)arg1;
- (id)iconSpecificationFromRecipe:(id)arg1;
- (id)recipeFromResourceProvider:(id)arg1 descriptor:(id)arg2;

@end
