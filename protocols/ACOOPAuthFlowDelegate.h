/* Generated by RuntimeBrowser.
 */

@protocol ACOOPAuthFlowDelegate

@required

- (NSURL *)authURLForUsername:(NSString *)arg1;
- (NSMutableURLRequest *)requestForAuthURL:(NSURL *)arg1;
- (void)setAuthFlowCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSDictionary *, NSError *, void*

@optional

- (BOOL)shouldHideWebView:(UIWebView *)arg1 forLoadWithRequest:(NSURLRequest *)arg2;

@end
