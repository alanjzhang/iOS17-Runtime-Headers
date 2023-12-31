/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance {
    <CKObjectValidating> * _leftExpressionValidator;
    <CKObjectValidating> * _modifierValidator;
    <CKObjectValidating> * _operatorValidator;
    <CKObjectValidating> * _optionsValidator;
    <CKObjectValidating> * _rightExpressionValidator;
}

@property (nonatomic, retain) <CKObjectValidating> *leftExpressionValidator;
@property (nonatomic, retain) <CKObjectValidating> *modifierValidator;
@property (nonatomic, retain) <CKObjectValidating> *operatorValidator;
@property (nonatomic, retain) <CKObjectValidating> *optionsValidator;
@property (nonatomic, retain) <CKObjectValidating> *rightExpressionValidator;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)leftExpressionValidator;
- (id)modifierValidator;
- (id)operatorValidator;
- (id)optionsValidator;
- (id)rightExpressionValidator;
- (void)setLeftExpressionValidator:(id)arg1;
- (void)setModifierValidator:(id)arg1;
- (void)setOperatorValidator:(id)arg1;
- (void)setOptionsValidator:(id)arg1;
- (void)setRightExpressionValidator:(id)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
