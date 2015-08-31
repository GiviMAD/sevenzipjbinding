package net.sf.sevenzipjbinding.junit.compression;

import net.sf.sevenzipjbinding.ArchiveFormat;

/**
 * Tests compression and extraction of a single file using generic callback.
 *
 * @author Boris Brodski
 * @version 9.20-2.00
 */
public class CompressGenericSingleFileZipTest extends CompressGenericSingleFileAbstractTest {

    @Override
    protected ArchiveFormat getArchiveFormat() {
        return ArchiveFormat.ZIP;
    }

}
