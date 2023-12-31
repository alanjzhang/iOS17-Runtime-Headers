/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECMessageBodyOriginalTextSubparser : ECMessageBodySubparser {
    bool  _foundForwardSeparator;
    bool  _foundText;
    id /* block */  _foundTextBlock;
    id /* block */  _foundWhitespaceBlock;
    <ECMessageBodyElement_Private> * _lastNonWhitespaceTextElement;
    NSMutableArray * _lastTextElements;
}

- (void)_consumeAnyLastTextElementAsAttribution:(bool)arg1;
- (void)_consumeTextElement:(id)arg1 isAttribution:(bool)arg2;
- (void)dealloc;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)messageBodyParserDidFinishParsing:(id)arg1;
- (void)setFoundTextBlock:(id /* block */)arg1;
- (void)setFoundWhitespaceBlock:(id /* block */)arg1;

@end
