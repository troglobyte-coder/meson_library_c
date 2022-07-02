# Contributing

## overview

Thank you for your interest in participating to the development!
Were setup to have a large fraction of this project is contributed
by people outside the core team and we are *excited* to see what
you do.

## process

### submitting patches

All changes must be submitted as pull requests to Github. This
causes them to be run through the CI system. All submissions must
pass a full CI test run before they are even considered for
submission.


### Keeping pull requests up to date

It is possible that while your pull request is being reviewed,
other changes are committed to master that cause merge conflicts
that must be resolved. The basic rule for this is very simple:
keep your pull request up to date using rebase only.

Do not merge head back to your branch. Any merge commits in your
pull request make it not acceptable for merging into master and
you must remove them.


### Acceptance and merging

The kind of review and acceptance any merge proposal gets depends
on the changes it contains. All pull requests must be reviewed and
accepted by someone with commit rights who is not the original
submitter. Merge requests can be roughly split into three different
categories.

The first one consists of MRs that only change the markdown documentation.
Anyone with access rights can push changes to these directly to master.
For major changes it is still recommended to create a MR so other people
can comment on it.

The second group consists of merges that don't change any functionality,
fixes to the CI system and bug fixes that have added regression tests (see
below) and don't change existing functionality. Once successfully reviewed
anyone with merge rights can merge these to master.

The final kind of merges are those that add new functionality or change
existing functionality in a backwards incompatible way. These require
the approval of the project lead.

## Green CI standard

No merge request may be merged until it has a fully green CI run. It does
not matter why CI fails, it is a hard blocker. Even if the MR could possibly
not have anything to do with the failure and clearly should be permitted,
it may not be merged. Only MRs that fix the CI issue are allowed to land in
trunk.

There is one, and only one, exception to this. At the time of writing the
Apple CI is unreliable and sometimes fails with clock skew errors.

If a merge causes CI failure any developer can revert it out of master. It
is then the responsibility of the original submitter to resubmit a fixed
version.


### Test

All new features must come with automatic tests that thoroughly prove that
the feature is working as expected. Similarly bug fixes must come with a
unit test that demonstrates the bug, proves that it has been fixed and
prevents the feature from breaking in the future.

Sometimes it is difficult to create a unit test for a given bug. If this
is the case, note this in your pull request. We may permit bug fix merge
requests in these cases. This is done on a case by case basis. Sometimes
it may be easier to write the test than convince the maintainers that one
is not needed. Exercise judgment and ask for help in problematic cases.

## CI/CD

This document is aimed for contributors and documents the CI
setup used for testing this project. The project uses GitHub
actions CI for covering a wide range of target systems.


### GitHub Actions

The configuration files for GitHub actions are located in
`.github/workflows`. Here, all images are tested with the
full `run_tests.c` run. Additionally, some other, smaller,
tests are run for checking if the format follows the team
standard style guide.


### Docker Images

The Linux docker image are automatically built and uploaded
by GitHub actions. An image rebuild is triggered when any of
the image definition files are changed (in `Dockerfile`) in
the `main` branch. Additionally, the images are also updated
weekly.
